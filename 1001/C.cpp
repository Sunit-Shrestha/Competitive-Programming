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
	ll n, size;
	cin >> n;
	size = n;
	ll a[n];
	ll ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		ans += a[i];
	}
	ll f = a[0], l = a[n - 1], sum;
	for (int i = 0; i < n - 1; i++) {
		sum = abs(l - f);
		if (sum > ans) ans = sum;
		size--;
		for (int j = 0; j < size; j++) {
			a[j] = a[j + 1] - a[j];
		}
		f = a[0];
		l = a[size - 1];
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
