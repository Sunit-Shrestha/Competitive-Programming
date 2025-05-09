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
	int n;
	cin >> n;
	vector<int> a(n);
	for (auto& el : a) cin >> el;
	int mid = n / 2;
	bool has0l = 0, has0r = 0;
	for (ll i = 0; i < mid; i++) {
		if (a[i] == 0) has0l = 1;
	}
	for (ll i = mid; i < n; i++) {
		if (a[i] == 0) has0r = 1;
	}
	ll k = 1;
	if (has0l) k++;
	if (has0r) k++;
	cout << k << "\n";
	if (has0l) {
		cout << "1 " << mid << "\n";
		n = n - mid + 1;
		mid = 1;
	}
	if (has0r) {
		cout << mid + 1 << " " << n << "\n";
		n = mid + 1;
	}
	cout << "1 " << n << "\n";
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