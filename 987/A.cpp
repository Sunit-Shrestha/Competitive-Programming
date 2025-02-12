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
	vector<ll> h(n);
	for (int i = 0; i < n; i++) cin >> h[i];
	ll curr = h[0];
	ll count = 0;
	ll maxcount = 0;
	for (int i = 0; i < n; i++) {
		if (h[i] == curr) {
			count++;
		}
		else {
			maxcount = max(maxcount, count);
			curr = h[i];
			count = 1;
		}
		if (i == n - 1) maxcount = max(maxcount, count);
	}
	cout << n - maxcount << "\n";
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
