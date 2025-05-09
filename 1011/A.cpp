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
	string sr = s;
	reverse(all(sr));
	bool univ = 0;
	for (ll i = 0; i < n; i++) {
		if (s[i] < sr[i]) {
			univ = 1;
			break;
		}
		else if (s[i] > sr[i]) break;
	}
	if (k == 0) {
		if (univ == 1) cout << "yes\n";
		else cout << "no\n";
		return;
	}
	univ = 0;
	char c = s[0];
	for (char x : s) {
		if (x != c) univ = 1;
	}
	if (univ) cout << "yes\n";
	else cout << "no\n";
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