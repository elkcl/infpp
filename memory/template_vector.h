#ifndef INFPP_TEMPLATE_VECTOR_H
#define INFPP_TEMPLATE_VECTOR_H

#include <iostream>
#include <cassert>

template <typename T>
class Vector {
public:
    Vector();
    Vector(int size);
    Vector(const Vector& copy);
    ~Vector();
    Vector<T>& operator= (const Vector& copy);
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
std::ostream& operator<<(std::ostream& s, const Vector<T>& arr);
template <typename T>
std::istream& operator>>(std::istream& s, Vector<T>& arr);

#endif //INFPP_TEMPLATE_VECTOR_H
