#include <iostream>

using namespace std;

class Node {
private:
	Node* _firstChild;
	Node* _parent;
	Node* _next;
	Node* _prev;
	double _value;
public:
	Node() {}
	Node(double value) {
		_firstChild = nullptr;
		_parent = nullptr;
		_next = nullptr;
		_prev = nullptr;
		_value = value;
	}

	Node* firstChild() {return _firstChild;}
	Node* parent() {return _parent;}
	Node* next() {return _next;}
	Node* prev() {return _prev;}
	double value() {return _value;}

	Node* getRoot() {
		Node* curr = this;
		while (curr->_parent != nullptr) {
			curr = curr->_parent;
		}
		return curr;
	}

	Node* lastChild() {
		Node* curr = _firstChild;
		while (curr != nullptr && curr->_next != nullptr) {
			curr = curr->_next;
		}
		return curr;
	}

	bool contains(Node* n) {
	    if (this == n) {
            return true;
        }
        Node* curr = _firstChild;
		while (curr != nullptr) {
			if(curr == n || curr->contains(n)) {
                return true;
			}
			curr = curr->_next;
		}
		return false;
	}
	
	// простое добавление ребёнка
	void addChild(Node* n) {
		Node* last = lastChild();
		if (last == nullptr) {
			_firstChild = n;
		}
		else {
			last->_next = n;
			n->_prev = last;
		}
		n->_parent = this;
	}
	
	// добавление ребёнка с проверкой на циклы
	bool safeAddChild(Node* n) {
	    if (n->_parent != nullptr || n->contains(this)) {
            return false;
	    }
		addChild(n);
		return true;
	}

	void removeChild(Node* n) {
        Node* curr = _firstChild;
        while (curr != n) {
        	if (curr == nullptr) {
        		return;
        	}
            curr = curr->_next;
        }
        if (curr->_prev != nullptr) {
        	curr->_prev->_next = curr->_next;
        }
        if (curr->_next != nullptr) {
        	curr->_next->_prev = curr->_prev;
        }
	}

	double getSum() {
		Node* curr = _firstChild;
		double sum = _value;
		while (curr != nullptr) {
			sum += (*curr).getSum();
			curr = curr->_next;
		}
		return sum;
	}

	void hang() {
	    if (_parent == nullptr) {
            return;
	    }
	    _parent->hang();
	    _parent->_parent = this;
	    _parent->removeChild(this);
	    addChild(_parent);
	    _parent = nullptr;
	}
	
	void out(ostream& s, string pr1, string pr2) {
		s << pr1 << _value << endl;
		Node* curr = _firstChild;
		while (curr != nullptr && curr->_next != nullptr) {
			curr->out(s, pr2 + "├▶", pr2 + "│    ");
			curr = curr->_next;
		}
		if (curr != nullptr && curr->_next == nullptr) {
			curr->out(s, pr2 + "└▶", pr2 + "       ");
		}
	}
};

ostream& operator << (ostream& s, Node& el) {
	el.out(s, "▶", "    ");
}

int main() {
	int n;
	cin >> n;
	Node arr[n];
	double val;
	for (int i = 0; i < n; i++) {
		cin >> val;
		arr[i] = Node(val);
	}
	int a, b;
	for (int i = 0; i < n-1; i++) {
		cin >> a >> b;
		if(!arr[a].safeAddChild(arr+b)) {
            cout << "not a tree" << endl;
            return 1;
		}
	}
	int h;
	cin >> h;
	arr[h].hang();
	cout << arr[h].getSum() << endl << arr[h];
	return 0;
}
