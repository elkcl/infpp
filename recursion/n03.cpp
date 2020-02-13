#include <iostream>
using namespace std;

double pow(double a, int p) {
    if (p == 0) return 1;
    if (p % 2 == 0) {
        return pow(a*a, p/2);
    } else {
        return a*pow(a, p-1);
    }
}

int main() {
    double a;
    int n;
    cin >> a >> n;
    cout << pow(a, n);
}