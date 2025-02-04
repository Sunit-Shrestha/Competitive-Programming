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
	pair<ll, ll> edcount[n] = {}; // {count, index}
	vector<ll> adj[n];
	for (int i = 0; i < n; i++) {
		edcount[i].second = i;
	}
	for (int i = 0; i < n - 1; i++) {
		ll a, b;
		cin >> a >> b;
		adj[a - 1].pb(b - 1);
		adj[b - 1].pb(a - 1);
		edcount[a - 1].first++;
		edcount[b - 1].first++;
	}
	// for (int i = 0; i < n; i++) {
	// 	for (int j = 0; j < adj[i].size(); j++) {
	// 		cout << adj[i][j] << " ";
	// 	}
	// 	cout << "\n";
	// }
	// cout << "\n";
	// for (int i = 0; i < n; i++) cout << edcount[i].first << " " << edcount[i].second << "\n";
	// cout << "\n";
	sort(edcount, edcount + n, greater<pair<ll, ll>>());

	pair<ll, ll> maxneigh[n] = {}; // {max neighbor edges, count of such neighbors}
	for (int i = 0; i < n; i++) {
		ll idx = edcount[i].second;
		// cout << "i"<< i<< "\n";
		for (ll vert : adj[idx]) {
			// cout << vert << "\n";
			if (maxneigh[vert].first < edcount[i].first) {
				maxneigh[vert].first = edcount[i].first;
				maxneigh[vert].second = 1;
			}
			else if (maxneigh[vert].first == edcount[i].first) {
				maxneigh[vert].second++;
			}
		}
	}
	// cout << "neigh" << "\n";
	// for (int i = 0; i < n; i++) cout << maxneigh[i].first << " " << maxneigh[i].second << "\n";

	ll max = edcount[0].first;
	ll sec = edcount[1].first;
	ll seccount = 1;
	while (edcount[seccount + 1].first == sec) seccount++;
	if (max == sec) {
		for (int i = 0; i < seccount + 1; i++) {
			pair<ll, ll> neigh = maxneigh[edcount[i].second];
			if (neigh.first != sec or (neigh.first == sec and neigh.second != seccount)) {
				// cout << "ifloop" << "\n";
				cout << max + sec - 1 << "\n";
				return;
			}
		}
		// cout << "if" << "\n";
		cout << max + sec - 2 << "\n";
		return;
	}
	else {
		pair<ll, ll> neigh = maxneigh[edcount[0].second];
		if (neigh.first == sec and neigh.second == seccount) {
			// cout << "elseif" << "\n";
			cout << max + sec - 2 << "\n";
			return;
		}
		else {
			// cout << "elseelse" << "\n";
			cout << max + sec - 1 << "\n";
			return;
		}
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
