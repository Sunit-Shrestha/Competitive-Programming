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
	vector<ll> startval(n);
	vector<pair<ll,ll>> endval(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		startval[i] = a[i] + 2 * i;
		endval[i] = {a[i] + i, i};
	}	
	sort(all(endval));
	map<ll, vector<ll>> adj;
	for (ll i = 1; i < n; i++) {
		ll idx = lower_bound(endval.begin(), endval.end(), make_pair(startval[i], -1)) - endval.begin();
		while (idx < n and endval[idx].first == startval[i]) {
			adj[i].pb(endval[idx].second);
			idx++;
		}
	}
	queue<ll> q;
	for (ll i = 0; i < n; i++) {
		if (endval[i].first == n) {
			q.push(endval[i].second);
		}
	}
	ll ans = n;
	while(!q.empty()) {
		ll cur = q.front();
		q.pop();
		if (adj[cur].empty()) {
			ans = max(ans, startval[cur]);
			continue;
		}
		for (ll i = 0; i < ll(adj[cur].size()); i++) {
			q.push(adj[cur][i]);
		}
	}
	cout << ans << endl;
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
