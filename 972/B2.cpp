#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, m, q;
		cin >> n >> m >> q;
		int b[m];
		int a[q];
		for (int j = 0; j < m; j++) {
			cin >> b[j];
		}
		for (int j = 0; j < q; j++) {
			cin >> a[j];
		}
		sort(b, b + m);
		
		for (int j = 0; j < q; j++) {
			if (a[j] < b[0]) {
				cout << b[0] - 1 << endl;
			}
			else if (a[j] > b[m - 1]) {
				cout << n - b[m - 1] << endl;
			}
			else {
				int x, c;
				c = lower_bound(b, b + m, a[j]) - b - 1;
				x = (b[c] + b[c + 1]) / 2;
				cout << x - b[c] << endl;
			}
		}
	}
	return 0;
}