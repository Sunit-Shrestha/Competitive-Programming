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
	ll n, k;
	cin >> n >> k;
	ll a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) {
		bool win = 1;
		for (int j = 0; j < n; j++) {
			if (i != j) win = win and abs(a[i] - a[j]) % k != 0;
		}
		if (win) {
			cout << "YES\n";
			cout << i + 1 << "\n";
			return;
		}
	}
	cout << "NO\n";
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
