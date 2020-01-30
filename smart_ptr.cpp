#include <iostream>
#include <algorithm>
#include <memory>
using namespace std;
int main()
{
	int n;
	cin >> n;
	auto arr = make_unique<int[]>(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.get(), arr.get()+n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}