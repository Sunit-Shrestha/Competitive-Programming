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

ll slv(string num) {
	ll digcnt = num.length();
	ll dp[digcnt + 1][11][2][2]; // num gen size, diginit to not use, lead0, bounded
	memset(dp, 0, sizeof(dp));

	for (ll i = 0; i <= 10; i++) {
		dp[0][i][0][0] = 1;
		dp[0][i][0][1] = 1;
		dp[0][i][1][0] = 1;
		dp[0][i][1][1] = 1;
	}
	
	for (ll i = 1; i <= digcnt; i++) {
		for (ll j = 0; j <= 10; j++) {
			for (ll k = 0; k < 2; k++) {
				for (ll l = 0; l < 2; l++) {

					ll ulim = (l == 1) ? (num[digcnt - i] - '0') : 9;
					for (ll m = 0; m <= ulim; m++) {
						if (m == j and !k) continue;
						dp[i][j][k][l] += dp[i - 1][m][k and m == 0][l == 1 and m == ulim];
					}

				}
			}
		}
	}

	// for (ll i = 0; i <= digcnt; i++) {
	// 	for (ll j = 0; j <= 10; j++) {
	// 		cout << dp[i][j][0][0] << "," << dp[i][j][0][1] << "," << dp[i][j][1][0] << "," << dp[i][j][1][1] << "\t";
	// 	}
	// 	cout << "\n";
	// }

	return dp[digcnt][10][1][1];
}

void solve() {
	ll a, b;
	cin >> a >> b;
	a = a - 1;
	cout << slv(to_string(b)) - slv(to_string(a)) << "\n";
}

int main() {
	fast_io;

	solve();

	return 0;
}