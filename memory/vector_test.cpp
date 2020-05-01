#include <iostream>
#include "template_vector.h"
using namespace std;

int main() {
    int n;
    cin >> n;
    Vector<double> vec;
    for (int i = 0; i<n; ++i) {
        double curr;
        cin >> curr;
        vec.push_back(curr);
    }
    vec.quicksort();
    cout << vec;
}