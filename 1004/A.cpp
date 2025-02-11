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
	ll x, y;
	cin >> x >> y;
	if (y - x == 1) {
		cout << "YES\n";
		return;
	}
	if (x > y and (x - y + 1) % 9 == 0) {
		cout << "YES\n";
		return;
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
