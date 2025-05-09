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
	ll n, m;
	cin >> n >> m;
	vector<string> grid(n);
	for (auto& s : grid) cin >> s;
	for (ll i = 1; i < n; i++) {
		for (ll j = 1; j < m; j++) {
			char c = grid[i][j];
			if (c == '0') continue;
			bool f1 = 1;
			bool f2 = 1;
			for (ll k = j - 1; k >= 0; k--) {
				if (f1 == 0) break;
				if (grid[i][k] == '0') f1 = 0;
			}
			for (ll k = i - 1; k >= 0; k--) {
				if (f2 == 0) break;
				if (grid[k][j] == '0') f2 = 0;
			}
			if (f1 == 0 and f2 == 0) {
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";
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