#include "mergesort.h"
#include <iostream>
using namespace std;

int main() {
    int a[7];
    for (int i = 0; i < 7; ++i) {
        cin >> a[i];
    }
    mergesort(a, a + 7);
    for (int i = 0; i < 7; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}