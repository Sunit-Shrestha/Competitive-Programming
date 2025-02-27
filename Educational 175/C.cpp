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
	string s;
	cin >> s;
	vector<ll> a(n);
	ll l = 0, r = 1;
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		r = max(r, a[i]);
	}
	while (l < r) {
		ll m = l + (r - l) / 2;
		ll maxred = 1e18;
		ll ops = 0;
		
		for (ll i = 0; i < n; i++) {
			if (s[i] == 'B') {
				if (a[i] > m and maxred > m) {
					ops++;
					maxred = 0;
				}
			}
			else {
				if (a[i] > m) {
					maxred = max(maxred, a[i]);
				}
			}
		}

		if (ops > k) {
			l = m + 1;
		}
		else {
			r = m;
		}
	}
	cout << l << "\n";
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
