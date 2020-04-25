#include "template_vector.h"
using namespace std;

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
Vector<T>::Vector(const Vector<T>& copy): _size{copy._size}, _capacity{copy._capacity} {
    _data = new T[_capacity];
    for (int i = 0; i < _size; ++i) {
        _data[i] = copy._data[i];
    }
}

template <typename T>
Vector<T>::~Vector() {
    delete[] _data;
}

template <typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& copy) {
    if (this != &copy) {
        if (copy._size != _size) {
            delete[] _data;
            _size = copy._size;
            _capacity = copy._capacity;
            _data = new double[_capacity];
        }
        //memcpy(_data, arr._data, _size*sizeof(double));
        for (int i = 0; i < _size; ++i) {
            _data[i] = copy._data[i];
        }
    }
    return *this;
}

template <typename T>
T Vector<T>::operator[] (int i) const {
    if (i < 0) {
        i += _size;
    }
    assert(i < _size);
    assert(i >= 0);
    return _data[i];
}

template <typename T>
T& Vector<T>::operator[] (int i) {
    if (i < 0) {
        i += _size;
    }
    assert(i < _size);
    assert(i >= 0);
    return _data[i];
}

template <typename T>
void Vector<T>::reserve(int cap) {
    assert(cap >= _size);
    _capacity = cap;
    T *nd = new T[cap];
    //memcpy(nd, _data, _size*sizeof(T));
    for (int i = 0; i < _size; ++i) {
        nd[i] = _data[i];
    }
    delete[] _data;
    _data = nd;
}

template <typename T>
void Vector<T>::push_back(T& el) {
    if (_size >= _capacity) {
        reserve(_capacity*2);
    }
    _data[_size++] = el;
}

template <typename T>
void Vector<T>::insert(T& el, int i) {
    assert(i <= _size);
    assert(i >= 0);
    if (_size+1 > _capacity) {
        _capacity *=2;
        T *nd = new T[_capacity];
        //memcpy(nd, _data, i*sizeof(T));
        //memcpy(nd+i, _data+i+1, (_size-i-1)*sizeof(T));
        for (int j = 0; j < i; ++j) {
            nd[j] = _data[j];
        }
        for (int j = i; j < _size; ++j) {
            nd[j+1] = _data[j];
        }
        delete[] _data;
        _data = nd;
    } else {
        //memmove(_data+i+1, _data+i, (_size-i)*sizeof(T));
        for (int j = _size-1; j >= i; ++j) {
            _data[j+1] = _data[j];
        }
    }
    _size++;
    _data[i] = el;
}

template <typename T>
void Vector<T>::erase(int i) {
    assert(i < _size);
    assert(i >= 0);
    //memmove(_data+i, _data+i+1, (_size-i-1)*sizeof(T));
    for (int j = i; j < _size-1; ++j) {
        _data[j] = _data[j+1];
    }
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