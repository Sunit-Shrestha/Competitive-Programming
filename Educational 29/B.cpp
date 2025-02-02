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
	int w[2*n];
	for (int i = 0; i < 2 * n; i++) cin >> w[i];
	sort(w, w + 2 * n);
	int diff[2*n - 1];
	for (int i = 0; i < 2 * n - 1; i++) diff[i] = abs(w[i + 1] - w[i]);
	int ans = 2e9;
	for (int i = 0; i < 2 * n; i+=2) {
		for (int j = i + 1; j < 2 * n; j+=2) {
			int sta = 0;
			for (int k = 0; k < i; k+=2) sta += diff[k];
			for (int k = i + 1; k < j; k+=2) sta += diff[k];
			for (int k = j + 1; k < 2 * n; k+=2) sta += diff[k];
			ans = min(ans, sta);
		}
	}
	cout << ans << '\n';
}

int main() {
	fast_io;

	solve();

	return 0;
}
