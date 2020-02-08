#include <iostream>
#include <string>
using namespace std;

void print_num(string num) {
	if (num.empty()) return;
	cout << num[0];
	print_num(num.substr(1));
}

int main() {
	int n;
	cin >> n;
	print_num(to_string(n));
}