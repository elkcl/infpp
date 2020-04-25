#include <iostream>
#include "vector_class.h"
using namespace std;

int main() {
    int n;
    cin >> n;
    VectorDouble vec;
    for (int i = 0; i<n; ++i) {
        double curr;
        cin >> curr;
        vec.push_back(curr);
    }
    cout << vec;
}