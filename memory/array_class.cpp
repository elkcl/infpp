#include <iostream>
#include <cassert>
#include <iterator>
#include <initializer_list>
using namespace std;

class ArrayDouble {
public:
	typedef double* iterator;
	typedef const double* const_iterator;
	ArrayDouble(int size);
	ArrayDouble(const initializer_list<double> &list);
	~ArrayDouble();
	int size() const {return _size;}
	double operator[] (int i) const;
	double& operator[] (int i);
	ArrayDouble& operator= (const ArrayDouble &arr);
	iterator begin() {return _data;}
	iterator end() {return _data+_size;}
private:
	const int _size;
	double *_data;
};

ArrayDouble::ArrayDouble(int size): _size{size} {
	_data = new double[size];
	assert(_data != NULL);
}
ArrayDouble::ArrayDouble(const initializer_list<double> &list): ArrayDouble(list.size()) {
	int i = 0;
	for (auto &el : list) {
		_data[i] = el;
		i++;
	}
}
ArrayDouble::~ArrayDouble() {
	delete[] _data;
}
double ArrayDouble::operator[] (int i) const {
	assert(i < _size);
	assert(i >= -_size);
	if (i >= 0) {
		return _data[i];
	}
	else {
		return _data[i+_size];
	}
}
double& ArrayDouble::operator[] (int i) {
	assert(i < _size);
	assert(i >= -_size);
	if (i >= 0) {
		return _data[i];
	}
	else {
		return _data[i+_size];
	}
}

ostream& operator<<(ostream& s, const ArrayDouble& arr) {
	for (int i = 0; i < arr.size(); i++) {
		s << arr[i] << " ";
	}
	return s;
}
istream& operator>>(istream& s, ArrayDouble& arr) {
	for (int i = 0; i < arr.size(); i++) {
		s >> arr[i];
	}
	return s;
}

class ArrayInt {
public:
	typedef int* iterator;
	typedef const int* const_iterator;
	ArrayInt(int size);
	ArrayInt(const initializer_list<int> &list);
	~ArrayInt();
	int size() const {return _size;}
	int operator[] (int i) const;
	int& operator[] (int i);
	ArrayInt& operator= (const ArrayInt &arr);
	iterator begin() {return _data;}
	iterator end() {return _data+_size;}
private:
	const int _size;
	int *_data;
};

ArrayInt::ArrayInt(int size): _size{size} {
	_data = new int[size];
	assert(_data != NULL);
}
ArrayInt::ArrayInt(const initializer_list<int> &list): ArrayInt(list.size()) {
	int i = 0;
	for (auto &el : list) {
		_data[i] = el;
		i++;
	}
}
ArrayInt::~ArrayInt() {
	delete[] _data;
}
int ArrayInt::operator[] (int i) const {
	assert(i < _size);
	assert(i >= -_size);
	if (i >= 0) {
		return _data[i];
	}
	else {
		return _data[i+_size];
	}
}
int& ArrayInt::operator[] (int i) {
	assert(i < _size);
	assert(i >= -_size);
	if (i >= 0) {
		return _data[i];
	}
	else {
		return _data[i+_size];
	}
}

ostream& operator<<(ostream& s, const ArrayInt& arr) {
	for (int i = 0; i < arr.size(); i++) {
		s << arr[i] << " ";
	}
	return s;
}
istream& operator>>(istream& s, ArrayInt& arr) {
	for (int i = 0; i < arr.size(); i++) {
		s >> arr[i];
	}
	return s;
}

int main() {
	int n;
	cin >> n;
	ArrayDouble arr(n);
	cin >> arr;
	cout << arr;
}