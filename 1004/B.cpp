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
	vector<ll> a(n + 1);
	a[n] = 1e9;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(all(a));
	ll curr = a[0], count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == curr) {
			count++;
		}
		else {
			if (count % 2 == 0) {
				count = (count - 2 * (a[i] - curr)) + 1;
				if (count < 0){
					count = 1;
				}
				curr = a[i];
			}
			else {
				count = (count - 2 * (a[i] - curr)) + 1;
				curr = a[i];
				if (count > 0) {
					continue;
				}
				else {
					cout << "NO\n";
					return;
				}
			}
		}
	}
	cout << "YES\n";
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
