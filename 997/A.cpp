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
	int n, m;
	cin >> n >> m;
	int x[n], y[n];
	for (int i = 0; i < n; i++) 
		cin >> x[i] >> y[i];
	int per = 2 * m;
	for (int i = 1; i < n; i++) {
		// cout << per << x[i] << y[i] << endl;
		per += 2 * (x[i] + y[i]);
	}
	per += 2 * m;
	cout << per << endl;
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
