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
	string inp;
	cin >> inp;
	ll count[26] = {};
	for (char c : inp) {
		count[c - 'a']++;
	}
	ll maxidx = 0, minidx;
	for (int i = 1; i < 26; i++) {
		if (count[i] > count[maxidx]) {
			minidx = maxidx;
			maxidx = i;
		}
		else if (count[i] != 0) {
			minidx = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (count[i] != 0 and count[i] < count[minidx]) minidx = i;
	}
	// cout << "min: " << minidx << " max: " << maxidx << endl;
	for (char& c : inp) {
		if (c == 'a' + minidx) {
			c = 'a' + maxidx;
			break;
		}
	}
	cout << inp << "\n";
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
