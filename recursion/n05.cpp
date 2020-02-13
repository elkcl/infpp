#include <iostream>
#include <tuple>
using namespace std;

tuple<int, int, int> gcd(int a, int b) { // d, m, n
    if (b == 0) {
        return make_tuple(a, 1, 0);
    }
    auto [d, n, m] = gcd(b, a%b);
    return make_tuple(d, m, n - (a/b)*m);
}

int main() {
    int a, b;
    cin >> a >> b;
    auto [d, m, n] = gcd(a, b);
    cout << d << " " << m << " " << n << endl;
}