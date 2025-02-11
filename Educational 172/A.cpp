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
	ll n, k;
	cin >> n >> k;
	ll total = 0;
	vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		total += a[i];
	}
	if (total <= k) {
		cout << k - total << "\n";
		return;
	}
	sort(a.rbegin(), a.rend());
	ll sum = 0;
	ll i;
	for (i = 0; sum + a[i] <= k; i++) {
		sum += a[i];
	}
	cout << k - sum << "\n";	
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
