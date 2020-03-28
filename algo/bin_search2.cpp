#include <iostream>
using namespace std;

int main()
{
	int n, x;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> x;
	int from = 0, to = n, mid = n/2; // полуинтервал [from; to)
	while (to-from > 0) {
		mid = from + (to - from)/2;
		if (x > a[mid]) {
			to = mid;
		}
		else {
			from = mid + 1;
		}
	}
	cout << to + 1;
	return 0;
}