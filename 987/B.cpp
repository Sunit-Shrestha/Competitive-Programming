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
	vector<ll> p(n);
	for (int i = 0; i < n; i++) cin >> p[i];
	ll i = 0;
	while (i < n - 1) {
		if (p[i] == i + 1) {
			i++;
		}
		else if (p[i] == i + 2 and p[i + 1] == i + 1) {
			i += 2;
		}
		else {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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
