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
	if (k >= (n + 1) / 2) {
		for (ll i = 0; i < n - k; i++) cout << "1";
		for (ll i = 0; i < 2 * k - n; i++) cout << "1";
		for (ll i = 0; i < n - k; i++) cout << "0";
		cout << "\n";
	}
	else {
		for (ll i = 0; i < k; i++) cout << "1";
		for (ll i = 0; i < n - 2 * k; i++) cout << "0";
		for (ll i = 0; i < k; i++) cout << "0";
		cout << "\n";
	}
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