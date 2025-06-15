#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define all(v) v.begin(), v.end()
#define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> 

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;

void solve() {
	ll n, k;
	cin >> n >> k;
	ll a[n];
	for (ll i = 0; i < n; i++) cin >> a[i];
	ll ans = 0;
	for (ll i = 0; i < n; i++) {
		ll num = a[i];
		while (num > 0) {
			if (num % 2 != 0) ans++;
			num = num >> 1;
		}
	}

	ll subtracted = 0;
	for (ll b = 0; b <= 60; b++) {
		ll sub = ll(1) << b;
		ll count = 0;
		for (ll i = 0; i < n; i++) {
			if (a[i] % 2 == 0) count++;
			a[i] = a[i] >> 1;
		}
		ll subc = min(count, k / sub);
		ans += subc;
		k -= sub * subc;
		subtracted += sub * subc;
		if (subc != count) break;
	}
	cout << ans << "\n";
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