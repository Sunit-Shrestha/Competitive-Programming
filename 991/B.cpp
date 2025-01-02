#include <iostream>

using namespace std;

void solve() {
	int n;
	cin >> n;
	long long odd = 0, even = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (i % 2 == 0) {
			odd += x;
		}
		else {
			even += x;
		}
	}
	int odiv, ediv;
	odiv = ediv = n / 2;
	if (n % 2 != 0) odiv++;
	if (odd % odiv == 0 && even % ediv == 0 && odd / odiv == even / ediv) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}