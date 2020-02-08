#include <iostream>
#include <cassert>
#include <algorithm>
#include <iterator>
#include <initializer_list>
using namespace std;

class VectorDouble {
public:
	typedef double* iterator;
	typedef const double* const_iterator;
	VectorDouble();
	VectorDouble(int size);
	VectorDouble(const initializer_list<double> &list);
	~VectorDouble();
	int size() const {return _size;}
	int capacity() const {return _capacity;}
	double operator[] (int i) const;
	double& operator[] (int i);
	//VectorDouble& operator= (const VectorDouble &arr);
	iterator begin() {return _data;}
	iterator end() {return _data+_size;}
	void push_back(double el);
	void reserve(int cap);
	void shrink_to_fit();
	void insert(double el, int i);
	void erase(int i);
private:
	int _size;
	int _capacity;
	double *_data;
};

VectorDouble::VectorDouble() {
    _size = 0;
    _capacity = 0;
    _data = new double[_capacity];
	assert(_data != nullptr);
}

VectorDouble::VectorDouble(int size): _size{size}, _capacity{size} {
	_data = new double[size];
	assert(_data != nullptr);
}
VectorDouble::VectorDouble(const initializer_list<double> &list): VectorDouble(list.size()) {
	int i = 0;
	for (auto &el : list) {
		_data[i] = el;
		i++;
	}
}
VectorDouble::~VectorDouble() {
	delete[] _data;
}
double VectorDouble::operator[] (int i) const {
	assert(i < _size);
	assert(i >= -_size);
	if (i >= 0) {
		return _data[i];
	}
	else {
		return _data[i+_size];
	}
}
double& VectorDouble::operator[] (int i) {
	assert(i < _size);
	assert(i >= -_size);
	if (i >= 0) {
		return _data[i];
	} else {
		return _data[i+_size];
	}
}

void VectorDouble::reserve(int cap) {
    assert(cap >= _size);
    _capacity = cap;
    double *nd = new double[cap];
    copy(_data, _data+_size, nd);
    delete[] _data;
    _data = nd;
}

void VectorDouble::push_back(double el) {
    if (_capacity == 0) {
        reserve(1);
    }
    else if (_size >= _capacity) {
        reserve(_capacity*2);
    }
    _data[_size++] = el;
}

void VectorDouble::insert(double el, int i) {
    assert(i < _size);
	assert(i >= 0);
	if (_capacity == 0) {
        reserve(1);
    }
    else if(_size+1 > _capacity) {
        reserve(_capacity*2);
    }
    copy_backward(_data+i, _data+_size, _data+_size+1); //TODO: сделать нормально
    _size++;
    _data[i] = el;
}

void VectorDouble::erase(int i) {
    assert(i < _size);
	assert(i >= 0);
	copy(_data+i+1, _data+_size, _data+i); //TODO: сделать нормально
	_size--;
}

void VectorDouble::shrink_to_fit() {
    if (_capacity > _size) {
        reserve(_size);
    }
}

ostream& operator<<(ostream& s, const VectorDouble& arr) {
	for (int i = 0; i < arr.size(); i++) {
		s << arr[i] << " ";
	}
	return s;
}
istream& operator>>(istream& s, VectorDouble& arr) {
	for (int i = 0; i < arr.size(); i++) {
		s >> arr[i];
	}
	return s;
}

int main() {
    int n;
	cin >> n;
	VectorDouble vec;
	for (int i = 0; i<n; ++i) {
        double curr;
        cin >> curr;
        vec.push_back(curr);
	}
	cout << vec;
}
