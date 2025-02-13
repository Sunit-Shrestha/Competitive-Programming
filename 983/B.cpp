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
	ll l = k - 1;
	ll r = n - k;
	ll m, sideset;
	if ((l == 0 and r != 0) or (l != 0 and r == 0)) {
		cout << -1 << "\n";
		return;
	}
	if (l % 2 == r % 2) {
		sideset = min(l, r);
		m = 2 * sideset + 1;
		cout << m << "\n";
		for (int i = 0; i < sideset; i++) {
			cout << i + 1 << " ";
		}
		cout << k << " ";
		for (int i = 0; i < sideset; i++) {
			cout << k + i + 1 << " ";
		}
		cout << "\n";
		return;
	}
	cout << "-1\n";
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
