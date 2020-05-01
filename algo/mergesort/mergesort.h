#ifndef INFPP_MERGESORT_H
#define INFPP_MERGESORT_H

#include <functional>

template <typename T>
void mergesort(T *begin, T *end, std::function<bool(T&, T&)> comp);

template <typename T>
void mergesort(T *begin, T *end);

#include "mergesort.cpp"
#endif //INFPP_MERGESORT_H
