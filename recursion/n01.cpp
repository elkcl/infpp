#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

void print(int num) {
	assert(num / 10 == 0);
	cout << num;
}

void print_num(int num, int count) {
	if (num == 0) {
		print(0);
		return;
	}
	int digc = floor(log10(num)) + 1;
	if (digc < count) {
		print(0);
		print_num(num, count-1);
		return;
	}
	int digits = pow(10, digc-1);
	print(num/digits);
	if (digits != 1) print_num(num % digits, count-1);
}

int main() {
	int n;
	cin >> n;
	print_num(n, floor(log10(n))+1);
}