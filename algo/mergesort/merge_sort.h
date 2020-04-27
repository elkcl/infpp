#ifndef INFPP_MERGE_SORT_H
#define INFPP_MERGE_SORT_H

#include <functional>

template <typename T>
void merge_sort(T *begin, T *end, std::function<bool(T, T)> comp);

template <typename T>
void merge_sort(T *begin, T *end);

#include "merge_sort.cpp"
#endif //INFPP_MERGE_SORT_H
