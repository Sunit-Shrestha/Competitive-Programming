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
	ll l = 1, r = n;
	ll a[n], perms, pos;
	pos = 1;
	ll lfk = 0, lck = 0, tmp = k;
	while (tmp >>= 1) lfk++;
	lck = (k == (1ll << lfk)) ? lfk : lfk + 1;
	// cout << lck << " " << lfk << "\n";
	if (!(n - 1 >= lck)) {
		cout << -1 << "\n";	
		return;
	}

	ll lnperm = n - 1;
	ll start = 1;
	while (lnperm - 1 >= lck) {
		a[start - 1] = start;
		start++;
		lnperm--;
	}
	// cout << start << " " << lnperm << "\n";

	l = start;

	perms = 1ll << lck;
	// cout << lck << " " << perms << "\n";
	for (ll i = start; i <= n; i++) {
		perms >>= 1;
		if (k >= pos + perms) {
			a[r - 1] = i;
			r--;
			pos += perms;
		}
		else {
			a[l - 1] = i;
			l++;
		}
		// cout << l << " " << r << " " << pos << " " << perms << "\n";
	}
	for (ll i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << "\n";
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
