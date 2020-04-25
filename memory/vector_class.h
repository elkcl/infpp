#ifndef INFPP_VECTOR_CLASS_H
#define INFPP_VECTOR_CLASS_H

#include <iostream>
#include <cassert>
#include <cstring>
#include <iterator>
#include <initializer_list>

class VectorDouble {
public:
    typedef double* iterator;
    typedef const double* const_iterator;
    VectorDouble();
    VectorDouble(int size);
    VectorDouble(const std::initializer_list<double> &list);
    ~VectorDouble();
    int size() const {return _size;}
    int capacity() const {return _capacity;}
    double operator[] (int i) const;
    double& operator[] (int i);
    VectorDouble& operator= (const VectorDouble &arr);
    VectorDouble& operator= (const std::initializer_list<double> &list);
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

std::ostream& operator<<(std::ostream& s, const VectorDouble& arr);
std::istream& operator>>(std::istream& s, VectorDouble& arr);

#endif //INFPP_VECTOR_CLASS_H
