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
	ll n, l, r, sum = 0;
	cin >> n >> l >> r;
	ll al[l - 1], am[r - l + 1], ar[n - r];
	for (int i = 0; i < l - 1; i++) cin >> al[i];
	for (int i = 0; i < r - l + 1; i++) {
		cin >> am[i];
		sum += am[i];
	}
	for (int i = 0; i < n - r; i++) cin >> ar[i];
	sort(al, al + l - 1);
	sort(ar, ar + n - r);
	sort(am, am + r - l + 1, greater<int>());
	ll idx = 0;
	ll lsum = sum, rsum = sum;
	while (idx < l - 1 and idx < r - l + 1 and al[idx] < am[idx]) {
		lsum += al[idx] - am[idx];
		idx++;
	}
	idx = 0;
	while (idx < n - r and idx < r - l + 1 and ar[idx] < am[idx]) {
		rsum += ar[idx] - am[idx];
		idx++;
	}
	cout << min(lsum, rsum) << "\n";
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
