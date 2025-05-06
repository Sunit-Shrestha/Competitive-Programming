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
	ll n, x;
	cin >> n >> x;
	ll a;
	ll sum = 0;
	for (ll i = 0; i < n; i++) {
		cin >> a;
		sum += a;
	}	
	if (sum % n != 0) {
		cout << "NO\n";
		return;
	}
	if (sum / n == x) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
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
