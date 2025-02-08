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
	ll splitidx = 0;
	multiset<pair<ll, ll>> left, right; // {value, index}
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		left.insert(make_pair(a[i], i));
	}
	vector<ll> ans(n);
	ll idx;
	for (ll i = 0; i < n; i++) {
		if (left.empty()) {
			break;
		}
		// for (auto p : left) {
		// 	cout << p.first << " " << p.second << "\n";
		// }
		auto lit = left.begin();
		auto rit = right.begin();
		if (rit == right.end() or lit->first <= rit->first) {
			ans[i] = lit->first;
			for (ll j = splitidx; j < lit->second; j++) {
				left.erase(make_pair(a[j], j));
				right.insert(make_pair(a[j] + 1, j));
			}
			splitidx = lit->second + 1;
			idx = i + 1;
			left.erase(lit);
		}
		else {
			for (ll j = splitidx; j < n; j++) {
				right.insert(make_pair(a[j] + 1, j));
			}
			break;
		}
	}
	for (ll j = idx; j < n; j++) {
		ans[j] = right.begin()->first;
		right.erase(right.begin());
	}
	for (ll i = 0; i < n; i++) {
		cout << ans[i] << " ";
	}
	cout << "\n";
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
