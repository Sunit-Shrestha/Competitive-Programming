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
	ll n, m, k, notknown, x, dk;
	ll sum = 0;
	cin >> n >> m >> k;
	int not_included[m];
	for (int i = 0; i < m; i++) {
		cin >> not_included[i];
	}
	for (int i = 0; i < k; i++) {
		cin >> x;
		sum += x;
	}
	if (k < n - 1) {
		for (int i = 0; i < m; i++) {
			cout << 0;
		}
		cout << endl;
		return;
	}
	if (k == n) {
		for (int i = 0; i < m; i++) {
			cout << 1;
		}
		cout << endl;
		return;
	}
	dk = n * (n + 1) / 2 - sum;	
	for (int i = 0; i < m; i++) {
		if (not_included[i] == dk) {
			cout << 1;
		}
		else {
			cout << 0;
		}
	}
	cout << endl;
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
