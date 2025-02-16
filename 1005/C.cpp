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
	vector<ll> a(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	vector<ll> posseg(n);
	vector<ll> negseg(n);
	ll size = 0;
	bool curr; // 1 if curr is positive else 0
	if (a[0] > 0) {
		curr = 1;
		size++;
		posseg[size - 1] = a[0];
	}
	else {
		curr = 0;
		size++;
		negseg[size - 1] = a[0];
	}
	for (ll i = 1; i < n; i++) {
		if (a[i] > 0) {
			if (curr == 1) {
				posseg[size - 1] += a[i];
			}
			else {
				size++;
				posseg[size - 1] = a[i];
				curr = 1;
			}
		}
		else {
			if (curr == 0) {
				negseg[size - 1] += a[i];
			}
			else {
				size++;
				negseg[size - 1] = a[i];
				curr = 0;
			}
		}
	}
	vector<ll> prefpos(n);
	vector<ll> postneg(n);
	prefpos[0] = posseg[0];
	postneg[size - 1] = negseg[size - 1];
	for (ll i = 1; i < size; i++) {
		prefpos[i] = prefpos[i - 1] + posseg[i];
	}
	for (ll i = size - 2; i >= 0; i--) {
		postneg[i] = postneg[i + 1] + negseg[i];
	}
	// for (ll i = 1; i < size; i++) {
	// 	cout << prefpos[i] << " " << postneg[i] << "\n";
	// }
	ll ans = max(prefpos[size - 1], abs(postneg[0]));
	for (ll i = 0; i < size - 1; i++) {
		ans = max(ans, prefpos[i] + abs(postneg[i + 1]));
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
