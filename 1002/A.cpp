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
	int n;
	cin >> n;
	int a[n], b[n];
	unordered_set<int> c;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	sort(a, a+n);
	sort(b, b+n);
	sort(a + 1, a + (n - 1), greater<int>());
	for (int i = 0; i < n; i++) c.insert(a[i] + b[i]);
	if (c.size() >= 3) cout << "YES" << "\n";
	else cout << "NO" << "\n";
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
