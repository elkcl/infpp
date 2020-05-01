#include <functional>
using namespace std;

template <typename T>
T* partition(T *begin, T *end, std::function<bool(T&, T&)> comp) {
    T* i = begin-1;
    T pivot = *(end-1);
    for (T* j = begin; j < end; ++j) {
        if (!comp(pivot, *j)) {
            ++i;
            auto tmp = *i;
            *i = *j;
            *j = tmp;
        }
    }
    return i;
}

template <typename T>
void quicksort(T *begin, T *end, std::function<bool(T&, T&)> comp) {
    if (end-begin <= 1) return;
    T *index = partition(begin, end, comp);
    quicksort(begin, index, comp);
    quicksort(index, end, comp);
}

template <typename T>
void quicksort(T *begin, T *end) {
    auto comp = [](T& a, T& b) -> bool {
        return a < b;
    };
    quicksort<T>(begin, end, comp);
}