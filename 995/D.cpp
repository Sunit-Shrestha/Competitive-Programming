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
	int n, ceil, floor, max = 2 * pow(10, 9), min = 2, remo;
	ll x, y, sum = 0, temp, llceil, llfloor, interesting = 0;
	cin >> n >> x >> y;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum	+= a[i];
	}
	llceil = sum - y;
	llfloor = sum - x;
	if (llfloor < min) {
		cout << 0 << endl;
		return;
	}
	if (llceil > max) {
		cout << 0 << endl;
		return;
	}
	if (llceil < min) {
		llceil = min;
	}
	ceil = llceil;
	if (llfloor > max) {
		llfloor = max;
	}
	floor = llfloor;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			remo = a[i] + a[j];
			if (remo <= floor	and remo >= ceil) {
				interesting++;
			}
		}
	}
	cout << interesting << endl;
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
