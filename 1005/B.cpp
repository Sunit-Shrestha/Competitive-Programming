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
	vector<ll> count(n);
	for (ll i = 0; i < n; i++) {
		count[a[i] - 1]++;
	}
	vector<ll> ac(n);
	ll start = -1;
	for (ll i = 0; i < n; i++) {
		if (start == -1 and count[a[i] - 1] == 1) start = i;
		ac[i] = count[a[i] - 1];
	}
	if (start == -1) {
		cout << "0\n";
		return;
	}
	ll anslength = 1;
	ll curlength = 1;
	ll end = start, temp = start;
	for (ll i = start + 1; i < n; i++) {
		if (ac[i] == 1) {
			temp = i;
			curlength++;
		}
		else {
			if (curlength > anslength) {
				end = temp;
			}
			anslength = max(anslength, curlength);
			curlength = 0;
		}
	}
	if (curlength > anslength) {
		end = temp;
	}
	anslength = max(anslength, curlength);
	cout << end + 2 - anslength << " " << end + 1 << "\n";
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
