#ifndef INFPP_QUICKSORT_H
#define INFPP_QUICKSORT_H

#include <functional>

template <typename T>
T* partition(T *begin, T *end, std::function<bool(T&, T&)> comp);

template <typename T>
void quicksort(T *begin, T *end, std::function<bool(T&, T&)> comp);

template <typename T>
void quicksort(T *begin, T *end);

#include "quicksort.cpp"
#endif //INFPP_QUICKSORT_H
