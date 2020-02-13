#include <iostream>
#include <cmath>
using namespace std;

int f(int n) {
    if (n == 1) return 1;
    return f(n/2)+f(2*n/3);
}

int main() {
	int n;
	cin >> n;
	cout << f(n);
}