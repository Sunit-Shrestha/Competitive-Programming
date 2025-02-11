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
	vector<ll> count(n, 0);
	vector<ll> c(n);
	for (int i = 0; i < n; i++) {
		cin >> c[i];
		count[c[i] - 1]++;
	}
	ll ones = 0, other = 0;
	for (int i = 0; i < n; i++) {
		if (count[i] == 0) continue;
		if (count[i] == 1) {
			ones++;
		}
		else {
			other++;
		}
	}
	ll score = 0;
	if (ones % 2 == 0) {
		score += ones;
	}
	else {
		score += ones;
		score++;
	}
	score += other;
	cout << score << "\n";
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
