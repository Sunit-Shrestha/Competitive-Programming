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
	if (n % 2 == 0) {
		for (int i = 1; i <= n / 2; i++) {
			cout << i << " " << i << " ";
		}
		cout << "\n";
		return;
	}
	else if (n >= 27) {
		vector<ll> fillings(n);
		fillings[0] = 1e6, fillings[9] = 1e6, fillings[25] = 1e6;
		fillings[22] = 1e6 - 1, fillings[26] = 1e6 - 1;
		ll idx = 1;
		ll fill = 1;
		while (idx < n - 1) {
			if (fillings[idx] == 0) {
				fillings[idx] = fill, fillings[idx + 1] = fill;
				fill++;
				idx += 2;
			}
			else {
				idx++;
			}
		}
		for (int i = 0; i < n; i++) {
			cout << fillings[i] << " ";
		}
		cout << "\n";
		return;
	}
	cout << -1 << "\n";
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
