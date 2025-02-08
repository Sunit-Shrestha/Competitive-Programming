#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define all(v) v.begin(), v.end()

using vi = vector<int>;
using vll = vector<int>;

const int MOD = 1e9 + 7;

void solve() {
	int n;
	cin >> n;
	vector<pair<int, int>> a(n);
	vector<int> row(n);
	for (int i = 0; i < n; i++) cin >> a[i].first;
	for (int i = 0; i < n; i++) cin >> a[i].second;
	sort(all(a), [] (const pair<int, int> &c, const pair<int, int> &d) {
		if (d.first >= c.first and d.first >= c.second) return false;
		if (d.second >= c.first and d.second >= c.second) return false;
		return true;
	});
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (a[i].first > a[i].second) {
			ans += a[i].first;
			row[i] = 1;
		} else {
			ans += a[i].second;
		}
	}
	int max = -1e9;
	for (int i = 0; i < n; i++) {
		if (row[i] == 0 and a[i].first > max) max = a[i].first;
		if (row[i] == 1 and a[i].second > max) max = a[i].second;
	}
	ans += max;
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
