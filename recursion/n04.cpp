#include <iostream>
using namespace std;

double sum(double *a, int first, int last) { // полуинтервал [first, last)
    if (last == first) return 0;
    if (last-first == 1) return a[first];
    return sum(a, first, (first+last)/2) + sum(a, (first+last)/2, last);
}

int main() {
    int n;
    cin >> n;
    double a[n];
    for (int i=0; i<n; ++i) {
        cin >> a[i];
    }
    cout << sum(a, 0, n);
}