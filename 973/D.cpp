#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		long long int a[n];
		long long int a_max = 0, a_min = 10e13;
		bool cm[n - 1];
		bool no_change  = true;
		for (int j = 0; j < n; j++) {
			cin >> a[j];
		}

		for (int j = 0; j < n - 1; j++) {
			if (a[j] > a[j + 1]) {
				long long int sum = a[j] + a[j + 1];
				a[j] = sum / 2;
				a[j + 1] = sum / 2;
				if (sum % 2 != 0) {
					a[j]++;
				}
				cm[j] = false;
			}
			else {
				cm[j] = true;
			}
			no_change = no_change && cm[j];
		}

		while (!no_change) {
			no_change = true;
			for (int j = 0; j < n - 1; j++) {
				if (a[j] > a[j + 1]) {
					long long int sum = a[j] + a[j + 1];
					long long int half = sum / 2;
					if (a[j] == half or a[j + 1] == half) {
						cm[j] = true;
						continue;
					}
					a[j] = half;
					a[j + 1] = half;
					if (sum % 2 != 0) {
						a[j + 1]++;
					}
					cm[j] = false;
				}
				else {
					cm[j] = true;
				}
				// cout << a[j] << " ";
				no_change = no_change && cm[j];
			}
			// cout << a[n - 1] << endl;
		}

		for (int j = 0; j < n ; j++) {
			if (a[j] > a_max) {
				a_max = a[j];
			}
			if (a[j] < a_min) {
				a_min = a[j];
			}
		}
		cout << a_max - a_min << endl;
	}
	return 0;
}