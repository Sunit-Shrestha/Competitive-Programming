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
	int n, x;
	cin >> n >> x;
	ll sum;
	bool flag = 0;

	if (x & 1) {
		sum = n - 1 + (n % 2);
		flag = (n % 2);
	}
	else {
		sum = n - (n % 2);
		flag = !(n % 2);
	}

	ll count = sum;
	bool rem = 0;

	for (int i = 1; i < 32; i++) {
		if (x & 1 << i) { 
			sum += 1 << i; 
			if (flag) {
				if (rem and count > 1) sum -= 2, count -= 2;
				rem = rem ^ 1;
			}
			flag = 1;
		}
	}
	if (flag == 0) {
		if (n > 1) {
			sum += 4;
			cout << sum << "\n";
			return;
		}
		else {
			cout << -1 << "\n";
			return;
		}
	}
	cout << sum << "\n";
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