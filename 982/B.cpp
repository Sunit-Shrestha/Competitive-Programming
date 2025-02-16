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
	vector<ll> a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}	
	vector<ll> cost(n);
	for (ll i = 0; i < n; i++) {
		for (ll j = i + 1; j < n; j++) {
			if (a[i] < a[j]) cost[i]++;
		}
		cost[i] += i;
	}
	ll ans = 1e9;
	for (ll i = 0; i < n; i++) {
		ans = min(ans, cost[i]);
	}
	cout << ans << '\n';
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
