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
		vector<int> b(m);
		vector<int> a(q);
		for (int j = 0; j < m; j++) {
			cin >> b[j];
		}
		for (int j = 0; j < q; j++) {
			cin >> a[j];
		}
		sort(b.begin(), b.end());
		for (int j = 0; j < q; j++) {
			if (a[j] < b[0]) {
				cout << b[0] - 1 << endl;
			}
			else if (a[j] > b[1]) {
				cout << n - b[1] << endl;
			}
			else {
				int x;
				x = (b[0] + b[1]) / 2;
				cout << x - b[0] << endl;
			}
		}
	}
	return 0;
}