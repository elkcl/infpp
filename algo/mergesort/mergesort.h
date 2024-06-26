#ifndef INFPP_MERGESORT_H
#define INFPP_MERGESORT_H

#include <functional>

template <typename T>
void mergesort_recursive(T *begin, T *end, T* target, std::function<bool(T&, T&)> comp);

template <typename T>
void mergesort(T *begin, T *end, std::function<bool(T&, T&)> comp);

template <typename T>
void mergesort(T *begin, T *end);

#include "mergesort.inl"
#endif //INFPP_MERGESORT_H
