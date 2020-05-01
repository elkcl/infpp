#include "quicksort.h"
#include <iostream>
using namespace std;

int main() {
    int a[7];
    for (int i = 0; i < 7; ++i) {
        cin >> a[i];
    }
    quicksort(a, a + 7);
    for (int i = 0; i < 7; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}