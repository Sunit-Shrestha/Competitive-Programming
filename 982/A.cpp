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
	ll n;
	cin >> n;
	ll maxw = 0, maxh = 0;
	for (int i = 0; i < n; i++) {
		ll w, h;
		cin >> w >> h;
		maxw = max(maxw, w);
		maxh = max(maxh, h);
	}
	cout << 2 * (maxw + maxh) << "\n";
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
