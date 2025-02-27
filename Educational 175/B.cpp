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
	ll n, x, k;
	cin >> n >> x >> k;
	string s;
	cin >> s;
	vector<ll> disps(n);
	ll disp = 0;
	ll timeto0 = -1, timetoret = -1;
	for (ll i = 0; i < n; i++) {
		if (s[i] == 'L') disp--;
		else disp++;
		disps[i] = disp;
		if (timeto0 == -1 and disp == -x) timeto0 = i + 1;
		if (timetoret == -1 and disp == 0) timetoret = i + 1;
	}
	if (timeto0 == -1 or timeto0 > k) {cout << 0 << "\n"; return;}
	ll ans = 1;
	k = k - timeto0;
	if (timetoret == -1) {cout << ans << "\n"; return;}
	ans += k / timetoret;
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
