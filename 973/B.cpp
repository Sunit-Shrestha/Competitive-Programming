#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		int rating[n];
		for (int j = 0; j < n; j++) {
			cin >> rating[j];
		}
		long long int sum = 0;
		for (int j = 0; j < n; j++) {
			sum += rating[j];
		}
		sum -= (2 * rating[n-2]);
		cout << sum << endl;
	}
	return 0;
}