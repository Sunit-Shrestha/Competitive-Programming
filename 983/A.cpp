#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define all(v) v.begin(), v.end()

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;

void solve() {
	ll n;
	cin >> n;
	ll oncount = 0, temp;
	for (int i = 0; i < 2 * n; i++) {
		cin >> temp;
		oncount += temp;
	}
	ll max, min;
	if (oncount > n) {
		max = n - (oncount - n);
	}
	else {
		max = oncount;
	}
	if (oncount % 2 == 0) {
		min = 0;
	}
	else {
		min = 1;
	}
	cout << min << " " << max << "\n";
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
