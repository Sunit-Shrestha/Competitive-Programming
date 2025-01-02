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
	ll l, r, G;
	cin >> l >> r >> G;
	l = (l % G == 0) ? l / G : l / G + 1;
	r = r / G;
	if (l > r) {
		cout << -1 << " " << -1 << endl;
		return;
	}
	if (l == r) {
		if (l == 1) {
			cout << G << " " << G << endl;
			return;
		}
		cout << -1 << " " << -1 << endl;
		return;
	}
	queue<pair<ll, ll>> q;
	q.push({l, r});
	while (!q.empty()) {
		auto [a, b] = q.front();
		q.pop();
		if (gcd(a, b) == 1) {
			cout << G * a << " " << G * b << endl;
			return;
		}
		if (a < b) {
			q.push({a, b - 1});
			q.push({a + 1, b});
		}
	}
	cout << -1 << " " << -1 << endl;
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
