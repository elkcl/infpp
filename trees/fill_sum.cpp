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
	
	double getSum() {
		Node* curr = _firstChild;
		double sum = _value;
		while (curr != nullptr) {
			sum += (*curr).getSum();
			curr = curr->_next;
		}
		return sum;
	}
};

int main() {
	int n;
	cin >> n;
	if (n == 0) {return 0;}
	n--;
	double val;
	cin >> val;
	Node root(val);
	for (int i = 0; i < n; i++) {
		cin >> val;
		root.addChild(new Node(val));
	}
	cout << root.getSum();
	return 0;
}