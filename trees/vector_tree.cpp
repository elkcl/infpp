#include <iostream>
#include <cassert>
#include <cstring>
#include <stack>
#include <algorithm>
using namespace std;

template <typename T>
class Vector {
public:
    Vector();
    Vector(int size);
    ~Vector();
    typedef T* iterator;
    typedef const T* const_iterator;
    iterator begin() {return _data;}
    iterator end() {return _data+_size;}
    int size() const {return _size;}
    int capacity() const {return _capacity;}
    T operator[] (int i) const;
    T& operator[] (int i);
    void push_back(T el);
    void reserve(int cap);
    void shrink_to_fit();
    void insert(T el, int i);
    void erase(int i);
protected:
    T *_data;
private:
    int _size;
    int _capacity;

};

template <typename T>
Vector<T>::Vector() {
    _size = 0;
    _capacity = 1;
    _data = new T[_capacity];
    assert(_data != nullptr);
}

template <typename T>
Vector<T>::Vector(int size): _size{size}, _capacity{size} {
    _data = new T[size];
    assert(_data != nullptr);
}

template <typename T>
Vector<T>::~Vector() {
    delete[] _data;
}

template <typename T>
T Vector<T>::operator[] (int i) const {
    assert(i < _size);
    assert(i >= -_size);
    if (i >= 0) {
        return _data[i];
    } else {
        return _data[i+_size];
    }
}

template <typename T>
T& Vector<T>::operator[] (int i) {
    assert(i < _size);
    assert(i >= -_size);
    if (i >= 0) {
        return _data[i];
    } else {
        return _data[i+_size];
    }
}

template <typename T>
void Vector<T>::reserve(int cap) {
    assert(cap >= _size);
    _capacity = cap;
    T *nd = new T[cap];
    memcpy(nd, _data, _size*sizeof(T));
    delete[] _data;
    _data = nd;
}

template <typename T>
void Vector<T>::push_back(T el) {
    if (_size >= _capacity) {
        reserve(_capacity*2);
    }
    _data[_size++] = el;
}

template <typename T>
void Vector<T>::insert(T el, int i) {
    assert(i < _size);
    assert(i >= 0);
    if (_size+1 > _capacity) {
        reserve(_capacity*2);
    }
    memmove(_data+i+1, _data+i, (_size-i)*sizeof(T));
    _size++;
    _data[i] = el;
}

template <typename T>
void Vector<T>::erase(int i) {
    assert(i < _size);
    assert(i >= 0);
    memmove(_data+i, _data+i+1, (_size-i-1)*sizeof(T));
    _size--;
}

template <typename T>
void Vector<T>::shrink_to_fit() {
    if (_capacity > _size) {
        reserve(_size);
    }
}

template <typename T>
ostream& operator<<(ostream& s, const Vector<T>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        s << arr[i] << " ";
    }
    return s;
}
template <typename T>
istream& operator>>(istream& s, Vector<T>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        s >> arr[i];
    }
    return s;
}

class Node;

class VecNodes : public Vector<Node*> {
public:
    ~VecNodes() {
        for (auto& el : *this) {
            delete el;
        }
    }
    void destroy(int i) {
        delete _data[i];
        erase(i);
    }
};

class Node {
private:
    Node* _parent;
    VecNodes _children;
    double _value;
public:
    Node() {}
    Node(double value) {
        _parent = nullptr;
        _value = value;
    }

    Node* parent() {return _parent;}
    double value() {return _value;}
    VecNodes& children() {return _children;}

    Node* getRoot() {
        Node* curr = this;
        while (curr->_parent != nullptr) {
            curr = curr->_parent;
        }
        return curr;
    }

    Node* lastChild() {
        return _children[_children.size()-1];
    }

    bool contains(Node* n) {
        stack<Node*> sub;
        sub.push(this);
        Node *curr;
        while(!sub.empty()) {
            curr = sub.top();
            if (curr == n) {
                return true;
            }
            sub.pop();
            for (Node* currCh : curr->_children) {
                sub.push(currCh);
            }
        }
        return false;
    }

    // простое добавление ребёнка
    void addChild(Node* n) {
        _children.push_back(n);
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

    void detachChild(Node* n) {
        int i = 0;
        while (_children[i] != n) {
            ++i;
        }
        _children.erase(i);
    }

    void removeChild(Node* n) {
        int i = 0;
        while (_children[i] != n) {
            ++i;
        }
        _children.destroy(i);
    }

    double getSum() {
        double sum = 0;
        stack<Node*> sub;
        sub.push(this);
        Node *currSub;
        while (!sub.empty()) {
            currSub = sub.top();
            sum += currSub->_value;
            sub.pop();
            for (Node* currCh : currSub->_children) {
                sub.push(currCh);
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
            curr->_parent->detachChild(curr);
            curr->addChild(curr->_parent);
            curr->_parent = nullptr;
        }
    }

    int getDepth();
    friend ostream& operator << (ostream& s, Node& el);
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
    while (!sub.empty()) {
        currSub = sub.top();
        depth = max(depth, currSub.lvl);
        sub.pop();
        for (Node* currCh : currSub.node->_children) {
            NodeDepth nextWr {currCh, currSub.lvl+1};
            sub.push(nextWr);
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
        int i = currSub.node->_children.size()-1;
        if (i >= 0) {
            NodeWrap currWr {currSub.node->_children[i], currSub.pr2 + "└▶", currSub.pr2 + "   "};
            sub.push(currWr);
            --i;
        }
        while (i >= 0) {
            NodeWrap currWr {currSub.node->_children[i], currSub.pr2 + "├▶", currSub.pr2 + "│  "};
            sub.push(currWr);
            --i;
        }
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    Node* arr[n];
    double val;
    for (int i = 0; i < n; i++) {
        cin >> val;
        arr[i] = new Node(val);
    }
    int a, b;
    for (int i = 0; i < n-1; i++) {
        cin >> a >> b;
        if(!arr[a]->safeAddChild(*(arr+b))) {
            cout << "not a tree" << endl;
            return 1;
        }
    }
    int h;
    cin >> h;
    arr[h]->hang();
    cout << arr[h]->getSum() << endl << arr[h]->getDepth() << endl << *arr[h];
    return 0;
}
