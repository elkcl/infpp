template <typename T>
void mergesort_recursive(T *begin, T *end, T* target, std::function<bool(T&, T&)> comp) {
    int size = end-begin;
    if (size <= 1) return;
    T* mid = (size)/2 + begin;
    mergesort_recursive(begin, mid, target, comp);
    mergesort_recursive(mid, end, target, comp);
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
void mergesort(T *begin, T *end, std::function<bool(T&, T&)> comp) {
    T* target = new T[end-begin];
    mergesort_recursive(begin, end, target, comp);
    delete [] target;
}

template <typename T>
void mergesort(T *begin, T *end) {
    auto comp = [](T a, T b) -> bool {
        return a < b;
    };
    mergesort<T>(begin, end, comp);
}