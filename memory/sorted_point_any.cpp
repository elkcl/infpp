#include <iostream>
#include <cassert>
#include <cstring>
#include <cmath>

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
    void push_back(T& el);
    void reserve(int cap);
    void shrink_to_fit();
    void insert(T& el, int i);
    void erase(int i);
protected:
    T *_data;
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
    memcpy(nd, _data, _size*sizeof(T));
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
	    memcpy(nd, _data, i*sizeof(T));
	    memcpy(nd+i+1, _data+i, (_size-i)*sizeof(T));
	    delete[] _data;
	    _data = nd;
    } else {
    	memmove(_data+i+1, _data+i, (_size-i)*sizeof(T));
    }
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

template <typename T>
class Array {
public:
    typedef double* iterator;
    typedef const double* const_iterator;
    Array() {
        _size = -1;
        _data = nullptr;
    }
    Array(int size);
    Array(const initializer_list<T> &list);
    ~Array();
    int size() const {return _size;}
    T operator[] (int i) const;
    T& operator[] (int i);
    Array& operator= (const Array &arr);
    iterator begin() {return _data;}
    iterator end() {return _data+_size;}
private:
    int _size;
    T *_data;
};

template <typename T>
Array<T>::Array(int size): _size{size} {
    _data = new T[size];
}
template <typename T>
Array<T>::Array(const initializer_list<T> &list): Array(list.size()) {
    int i = 0;
    for (auto &el : list) {
        _data[i] = el;
        i++;
    }
}
template <typename T>
Array<T>::~Array() {
    delete[] _data;
}
template <typename T>
T Array<T>::operator[] (int i) const {
    assert(_data != nullptr);
    assert(i < _size);
    assert(i >= -_size);
    if (i >= 0) {
        return _data[i];
    }
    else {
        return _data[i+_size];
    }
}
template <typename T>
T& Array<T>::operator[] (int i) {
    assert(_data != nullptr);
    assert(i < _size);
    assert(i >= -_size);
    if (i >= 0) {
        return _data[i];
    }
    else {
        return _data[i+_size];
    }
}
template <typename T>
Array<T>& Array<T>::operator= (const Array<T> &arr) {
    if (this == &arr) {
        return *this;
    }
    if (_size == -1) {
        _size = arr._size;
        _data = new T[_size];
    }
    assert(_size == arr._size);
    for (int i=0; i<_size; ++i) {
        _data[i] = arr._data[i];
    }
}
template <typename T>
ostream& operator<<(ostream& s, const Array<T>& arr) {
    assert(arr.size() != -1);
    s << "(";
    for (int i = 0; i < arr.size()-1; i++) {
        s << arr[i] << "; ";
    }
    s << arr[arr.size()-1] << ")";
    return s;
}
template <typename T>
istream& operator>>(istream& s, Array<T>& arr) {
    assert(arr.size() != -1);
    for (int i = 0; i < arr.size(); i++) {
        s >> arr[i];
    }
    return s;
}

template <typename T>
struct ascendingOrder {
       bool operator() (T& a, T& b) {
           return a < b;
       }
};

struct ascDistZero {
    bool operator() (Array<double>& a, Array<double>& b) {
        assert(a.size() == b.size());
        double dist1 = 0;
        double dist2 = 0;
        for (int i=0; i<a.size(); ++i) {
            dist1 += a[i]*a[i];
            dist2 += b[i]*b[i];
        }
        return dist1 < dist2;
    }
};

template <typename T, typename Compare>
T* binarySearch(T* begin, T* end, T val) {
    T* mid;
    Compare comp;
    while (end-begin > 0) {
        mid = begin + (end - begin)/2;
        if (comp(val, *mid)) {
            end = mid;
        }
        else {
            begin = mid + 1;
        }
    }
    return end;
}

template <typename T, typename Compare = ascendingOrder<T> >
class SortedVector : public Vector<T> {
private:
    using Vector<T>::push_back;
    using Vector<T>::insert;
    using Vector<T>::operator[];
public:
    int push(T& value) {
        int i = find(value);
        insert(value, i);
        return i;
    }
    const T& operator[](int i) {
        if (i < 0) {
            i += Vector<T>::_size;
        }
        assert(i < Vector<T>::_size);
        assert(i >= 0);
        return Vector<T>::_data[i];
    }
    int find(T& value) {
        return binarySearch<T, Compare>(this->begin(), this->end(), value) - this->begin();
    }
};

int main() {
    int n, k;
    cin >> n >> k;
    SortedVector<Array<double>, ascDistZero> vec;
    for (int i=0; i<n; ++i) {
        Array<double> point(k);
        cin >> point;
        vec.push(point);
    }
    cout << vec;
    return 0;
}