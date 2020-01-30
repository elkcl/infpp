#include <iostream>
#include <stack>
#include <algorithm>

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
    	stack<Node*> sub;
    	sub.push(this);
    	Node *curr, *currCh;
    	while(!sub.empty()) {
    		curr = sub.top();
    		if (curr == n) {
    			return true;
    		}
    		sub.pop();
    		currCh = curr->_firstChild;
  	  	while (currCh != nullptr) {
           	 sub.push(currCh);
      	      currCh = currCh->_next;
  	      }
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
        else {
        	_firstChild = curr->_next;
        }
        if (curr->_next != nullptr) {
            curr->_next->_prev = curr->_prev;
        }
    }

    double getSum() {
        double sum = 0;
        stack<Node*> sub;
		sub.push(this);
		Node *currSub, *currCh;
    	while (!sub.empty()) {
   	 	currSub = sub.top();
   	 	sum += currSub->_value;
	    	sub.pop();
 	   	currCh = currSub->_firstChild;
  	  	while (currCh != nullptr) {
           	 sub.push(currCh);
      	      currCh = currCh->_next;
  	      }
  	  }
        return sum;
    }

    void hang() {
    	stack<Node*> par;
    	Node* curr = this;
    	while (curr->_parent != nullptr) {
    		par.push(curr);
    		curr = curr->_parent;
    	}
    	while(!par.empty()) {
    		curr = par.top();
    		par.pop();
    		curr->_parent->_parent = curr;
    		curr->_parent->removeChild(curr);
    		curr->addChild(curr->_parent);
    		curr->_parent = nullptr;
    		curr->_prev = nullptr;
    		curr->_next = nullptr;
    	}
    }
    
    int getDepth();
};

struct NodeWrap {
	Node* node;
	string pr1;
	string pr2;
};

struct NodeDepth {
	Node* node;
	int lvl;
};

int Node::getDepth() {
        int depth = 0;
        stack<NodeDepth> sub;
        NodeDepth wr {this, 1};
		sub.push(wr);
		NodeDepth currSub;
		Node* currCh;
    	while (!sub.empty()) {
   	 	currSub = sub.top();
   	 	depth = max(depth, currSub.lvl);
	    	sub.pop();
 	   	currCh = currSub.node->_firstChild;
  	  	while (currCh != nullptr) {
  	  		NodeDepth nextWr {currCh, currSub.lvl+1};
           	 sub.push(nextWr);
      	      currCh = currCh->_next;
  	      }
  	  }
        return depth;
}

ostream& operator << (ostream& s, Node& el) {
	stack<NodeWrap> sub;
	NodeWrap wr {&el, "▶", "  "};
	sub.push(wr);
	NodeWrap currSub;
	Node* currCh;
    while (!sub.empty()) {
    	currSub = sub.top();
    	sub.pop();
    	s << currSub.pr1 << currSub.node->value() << endl;
    	currCh = currSub.node->lastChild();
    	if (currCh != nullptr) {
        	NodeWrap currWr {currCh, currSub.pr2 + "└▶", currSub.pr2 + "   "};
            sub.push(currWr);
            currCh = currCh->prev();
        }
    	while (currCh != nullptr) {
    		NodeWrap currWr {currCh, currSub.pr2 + "├▶", currSub.pr2 + "│  "};
            sub.push(currWr);
            currCh = currCh->prev();
        }
    }
    return s;
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
    cout << arr[h].getSum() << endl << arr[h].getDepth() << endl << arr[h];
    return 0;
}
