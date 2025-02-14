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
	vector<ll> dist(n - 1);
	for (ll i = 0; i < n - 1; i++) dist[i] = a[i + 1] - a[i];
	ll ans = 1e18;
	if (n % 2 == 0) {
		ll maxdist = 1;
		for (int i = 0; i < n - 1; i += 2) {
			maxdist = max(maxdist, dist[i]);	
		}
		ans = maxdist;
	}
	else {
		if (n == 1) {
			cout << 1 << "\n";
			return;
		}
		vector<ll> distleft((n - 1)/2 + 1);
		vector<ll> distright((n - 1)/2 + 1);
		distleft[0] = 0;
		distright[0] = 0;
		for (int i = 1; i <= (n - 1)/2; i++) {
			distleft[i] = max(distleft[i - 1], dist[2 * i - 2]);
			distright[i] = max(distright[i - 1], dist[n - 2 * i]);
		}
		for (int i = 0; i <= (n - 1)/2; i++) {
			ans = min(ans, max(distleft[i], distright[(n - 1)/2 - i]));
		}
	}
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
