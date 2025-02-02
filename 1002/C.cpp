#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define all(v) v.begin(), v.end()

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;

void solve() {
	int n;
	cin >> n;
	int a[n][n]; //[queue][time]
	int ones[n];
	// int q[n] = {};
	// int revq[n] = {};
	// int final[n] = {};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			// q[i] += a[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		int j = n - 1;
		int count = 0;
		while(a[i][j] == 1 and j >= 0) {
			count++;
			j--;
		}
		ones[i] = count;
	}

	sort(ones, ones + n);

	// cout << "count: ";
	// for (int i = 0; i < n; i++) {
	// 	cout << ones[i] << " ";
	// }
	// cout << "\n";

	int ans = 1;
	for (int i = 0; i < n; i++) {
		if (ones[i] >= ans) {
			ans++;
		}
	}
	if (ans == n + 1) ans--;
	// cout << "ans:";
	cout <<  ans << "\n";

	// cout << "ans" << "\n";
	// for (int i = 0; i < n; i++) {
	// 	cout << final[i] << " ";
	// }
	// cout << "\n";
}

int main() {
	fast_io;

	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
