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
	ll w, h, a, b, x1, y1, x2, y2;
	cin >> w >> h >> a >> b;
	cin >> x1 >> y1 >> x2 >> y2;
	if (max(x1, x2) - min(x1, x2) < a) {
		if ((max(y1, y2) - min(y1, y2)) % b == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	else if (max(y1, y2) - min(y1, y2) < b) {
		if ((max(x1, x2) - min(x1, x2)) % a == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	else {
		if ((max(y1, y2) - min(y1, y2)) % b == 0 or (max(x1, x2) - min(x1, x2)) % a == 0)
			cout << "YES\n";
		else
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