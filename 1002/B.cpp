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
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++)	cin >> a[i];
	int bidx = 1, rem = n - k, subarr = 1;

	if (rem == 0) {
		for (int i = 1; i < n; i+=2) {
			if (a[i] != (i + 1) / 2) {
				cout << (i + 1) / 2 << "\n";
				return;
			}
		}
		cout << k / 2 + 1 << "\n";
		return;
	}

	int prem = rem;
	int shift = 1;
	while (prem + 2 - shift) {
		if (a[shift] != 1) {
			cout << 1 << "\n";
			return;
		}
		else {
			shift++;
		}
	}
	cout << 2 << "\n";

	// for (int i = 0; i < n; i++) {
	// 	if (subarr % 2 == 1) {
	// 		prem = rem;
	// 		shift = 1;
	// 		while (prem + 2 - shift) {
	// 			if (a[i + shift] != bidx) {
	// 				cout << bidx << "\n";
	// 				return;
	// 			}
	// 			else {
	// 				shift++;
	// 			}
	// 		}
	// 	}
	// 	else {
	// 		prem = rem;
	// 		shift = 1;
	// 		while (prem + 2 - shift) {
	// 			if (a[i + shift] != bidx + shift) {
	// 				cout << bidx + shift << "\n";
	// 				return;
	// 			}
	// 			else {
	// 				shift++;
	// 			}
	// 		}
	// 		bidx++;	
	// 	}
	// 	subarr++;
	// }
	// cout << bidx + 1 << "\n";
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
