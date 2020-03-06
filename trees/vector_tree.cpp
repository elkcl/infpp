#include <iostream>
#include <cassert>
#include <cstring>
#include <iterator>
#include <initializer_list>
using namespace std;

template <typename T>
class VectorObj<T*> {
public:
	VectorObj();
	explicit VectorObj(int size);
	~VectorObj();
	int size() const {return _size;}
	int capacity() const {return _capacity;}
	T* operator[] (int i) const;
	T*& operator[] (int i);
	VectorObj& operator= (const VectorObj &arr);
    //VectorObj& operator= (const initializer_list<double> &list);
	//iterator begin() {return _data;}
	//iterator end() {return _data+_size;}
	void push_back(T* el);
	void reserve(int cap);
	void shrink_to_fit();
	void insert(T* el, int i);
	void erase(int i);
private:
	int _size;
	int _capacity;
	T **_data;
};

VectorObj::VectorObj() {
    _size = 0;
    _capacity = 0;
    _data = new double[_capacity];
	assert(_data != nullptr);
}

VectorObj::VectorObj(int size): _size{size}, _capacity{size} {
	_data = new double[size];
	assert(_data != nullptr);
}
VectorObj::VectorObj(const initializer_list<double> &list): VectorObj(list.size()) {
	int i = 0;
	for (auto &el : list) {
		_data[i] = el;
		i++;
	}
}
VectorObj::~VectorObj() {
	delete[] _data;
}

VectorObj& VectorObj::operator= (const VectorObj &arr) {
    if (this == &arr)
        return *this;

    if (arr.size() != _size) {
        delete[] _data;
        _size = arr.size();
        _capacity = arr.capacity();
        _data = new double[_capacity];
    }
    memcpy(_data, arr._data, _size*sizeof(double));

    return *this;
}

VectorObj& VectorObj::operator= (const initializer_list<double> &list) {
    if (list.size() != _size) {
        delete[] _data;
        _size = list.size();
        _capacity = _size*2;
        _data = new double[_capacity];
    }

    int count = 0;
    for (auto &element : list)
    {
        _data[count] = element;
        ++count;
    }

    return *this;
}

double VectorObj::operator[] (int i) const {
	assert(i < _size);
	assert(i >= -_size);
	if (i >= 0) {
		return _data[i];
	} else {
		return _data[i+_size];
	}
}
double& VectorObj::operator[] (int i) {
	assert(i < _size);
	assert(i >= -_size);
	if (i >= 0) {
		return _data[i];
	} else {
		return _data[i+_size];
	}
}

void VectorObj::reserve(int cap) {
    assert(cap >= _size);
    _capacity = cap;
    double *nd = new double[cap];
    memcpy(nd, _data, _size*sizeof(double));
    delete[] _data;
    _data = nd;
}

void VectorObj::push_back(double el) {
    if (_capacity == 0) {
        reserve(1);
    } else if (_size >= _capacity) {
        reserve(_capacity*2);
    }
    _data[_size++] = el;
}

void VectorObj::insert(double el, int i) {
    assert(i < _size);
	assert(i >= 0);
	if (_capacity == 0) {
        reserve(1);
    } else if (_size+1 > _capacity) {
        reserve(_capacity*2);
    }
    memmove(_data+i+1, _data+i, (_size-i)*sizeof(double));
    _size++;
    _data[i] = el;
}

void VectorObj::erase(int i) {
    assert(i < _size);
	assert(i >= 0);
	memmove(_data+i, _data+i+1, (_size-i-1)*sizeof(double));
	_size--;
}

void VectorObj::shrink_to_fit() {
    if (_capacity > _size) {
        reserve(_size);
    }
}

ostream& operator<<(ostream& s, const VectorObj& arr) {
	for (int i = 0; i < arr.size(); i++) {
		s << arr[i] << " ";
	}
	return s;
}
istream& operator>>(istream& s, VectorObj& arr) {
	for (int i = 0; i < arr.size(); i++) {
		s >> arr[i];
	}
	return s;
}

int main() {
    int n;
	cin >> n;
	VectorObj vec;
	for (int i = 0; i<n; ++i) {
        double curr;
        cin >> curr;
        vec.push_back(curr);
	}
	cout << vec;
 }
