#include <iostream>
#include <iterator>
#include <cmath>
using namespace std;

void next(int *a, int size, int k) {
    if (a[size-1] == k) {
        a[size-1] = 1;
        next(a, size-1, k);
    } else {
        a[size-1] += 1;
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i=0; i<n; ++i) {
        a[i] = 1;
        cout << "1 ";
    }
    cout << endl;
    for (int i=0; i<pow(k, n)-1; ++i) {
        next(a, n, k);
        for (int j = 0; j<n; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}