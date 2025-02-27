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

const int MOD = 998244353;

void solve() {
	ll n;
	cin >> n;
	vector<ll> parent(n + 1);
	vector<ll> children[n + 1];
	for (ll i = 2; i <= n; i++) {
		cin >> parent[i];
		children[parent[i]].push_back(i);
	}

	vector<ll> d(n + 1);
	d[1] = 0;
	ll maxdepth = 0;
	queue<ll> q;
	q.push(1);
	while(!q.empty()) {
		ll vert = q.front();
		q.pop();
		maxdepth = max(maxdepth, d[vert]);
		for (auto c : children[vert]) {
			d[c] = d[vert] + 1;
			q.push(c);
		}
	}

	set<ll> dverts[maxdepth + 1];
	for (ll i = 1; i <= n; i++) dverts[d[i]].insert(i);

	vector<ll> counts(n + 1);
	counts[1] = 1;
	vector<ll> sums(maxdepth + 1);
	sums[0] = 1;
	for (auto vert : dverts[1]) {
		counts[vert] = 1;
		sums[1] = (sums[1] + 1) % MOD;
	}

	for (ll depth = 2; depth <= maxdepth; depth++) {
		for (auto vert: dverts[depth]) {
			counts[vert] = (sums[depth - 1] - counts[parent[vert]] + MOD) % MOD;
			sums[depth] = (sums[depth] + counts[vert]) % MOD;
		}
	}

	ll ans = 0;
	for (ll i = 1; i <= n; i++) ans = (ans + counts[i]) % MOD;
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
