#include <functional>
using namespace std;

template <typename T>
void merge_sort(T *begin, T *end, std::function<bool(T, T)> comp) {
    int size = end-begin;
    static T* target = new T[size];
    if (end - begin <= 1) return;
    T* mid = (size)/2 + begin;
    merge_sort(begin, mid, comp);
    merge_sort(mid, end, comp);
    T* p1 = begin;
    T* p2 = mid;
    for (int i = 0; i < size; ++i) {
        if (mid-p1 == 0) {
            target[i] = *p2;
            ++p2;
            continue;
        }
        if (end-p2 == 0) {
            target[i] = *p1;
            ++p1;
            continue;
        }
        if(comp(*p1, *p2)) {
            target[i] = *p1;
            ++p1;
        } else {
            target[i] = *p2;
            ++p2;
        }
    }

    for (int i = 0; i < size; ++i) {
        begin[i] = target[i];
    }
}

template <typename T>
void merge_sort(T *begin, T *end) {
    auto comp = [](T a, T b) -> bool {
        return a < b;
    };
    merge_sort<T>(begin, end, comp);
}