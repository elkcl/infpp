#include <iostream>
using namespace std;

void move(int n, int x, int y) {
    if (n == 1) {
        cout << "Move disc 1 from rod " << x <<
             " to rod " << y << endl;
        return;
    }
    int z = 6-(x+y);
    move(n-1, x, z);
    cout << "Move disc " << n << " from rod " << x <<
         " to rod " << y << endl;
    move(n-1, z, y);
}

int main() {
    int n;
    cin >> n;
    move(n, 1, 2);
}