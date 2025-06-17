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
	ll n, m, k;
	cin >> n >> m >> k;
	char map[n + 1][m + 1];
	for (ll i = 1; i <= n; i++)
		for (ll j = 1; j <= m; j++)
			cin >> map[i][j];

	ll dp[n + 1][m + 1];
	memset(dp, 0, sizeof(dp));

	ll totalgold = 0;
	for (ll i = 1; i <= n; i++) {
		for (ll j = 1; j <= m; j++) {
			bool isgold = map[i][j] == 'g';
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + isgold;
			totalgold += isgold;	
		}
	}

	ll deletegold[n + 1][m + 1];
	ll mindel = 1e9;
	for (ll i = 1; i <= n; i++) {
		for (ll j = 1; j <= m; j++) {
			if (map[i][j] != '.') {
				deletegold[i][j] = 1e9;
				continue;
			} 
			ll r1 = max(ll(0), i - k);
			ll r2 = min(n, i + k - 1);
			ll c1 = max(ll(0), j - k);
			ll c2 = min(m, j + k - 1);
			deletegold[i][j] = dp[r2][c2] - dp[r1][c2] - dp[r2][c1] + dp[r1][c1];
			mindel = min(deletegold[i][j], mindel);
		}
	}

	cout << totalgold - mindel << "\n";
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