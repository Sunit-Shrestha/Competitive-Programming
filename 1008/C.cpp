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
	ll n;
	cin >> n;
	vector<ll> nums(2 * n);
	for (ll i = 0; i < 2 * n; i++) {
		cin >> nums[i];
	}
	sort(all(nums));
	ll a = 0;
	for (ll i = 0; i < n - 1; i++) a -= nums[i];
	for (ll i = n - 1; i < 2 * n; i++) a += nums[i];
	cout << nums[2 * n - 1] << " " << a << " " << nums[2 * n - 2] << " ";
	for (ll i = 0; i < n - 1; i++) {
		cout << nums[i] << " " << nums[n - 1 + i] << " ";
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