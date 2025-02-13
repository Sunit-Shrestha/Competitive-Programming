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
	for (ll i = 0; i < n; i++) cin >> a[i];
	sort(all(a));
	vector<ll> endvals(n);
	endvals[n - 1] = n - 1;
	for (ll i = n - 2; i >= 0; i--) {
		ll endidx = endvals[i + 1];
		while (a[i] + a[min(i + 1, endidx)] <= a[endidx]) endidx--;
		endvals[i] = endidx;
	}
	vector<ll> changes(n);
	for (int i = 0; i < n; i++) {
		changes[i] = i + (n - 1 - endvals[i]);
	}
	ll ans = 1e9;
	for (ll i = 0; i < n; i++) ans = min(ans, changes[i]);
	cout << ans << "\n";
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
