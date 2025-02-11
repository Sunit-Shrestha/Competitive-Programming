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
	string s;
	cin >> s;
	ll sl = s.size();
	vector<ll> maxp(sl, -1);
	ll edgepos;
	maxp[sl - 1] = s[sl - 1] - '0';
	for (ll i = sl - 2; i >= 0; i--) {
		if (s[i] == '0') {
			maxp[i] = maxp[i + 1];
		}
		else {
			edgepos = i;
			break;
		}
	}
	ll ans = 1e9, digit, temp;
	if (s[sl - 1] == '7') {
		cout << 0 << "\n";
		return;
	}
	for (ll i = 0; i < sl - 1; i++) {
		digit = s[i] - '0';
		if (digit == 7) {
			cout << 0 << "\n";
			return;
		}
		else if (digit < 7) {
			temp = 7 - digit;
			if (maxp[i + 1] != -1 and maxp[i + 1] < temp) {
				temp++;
			}
			ans = min(ans, temp);
		}
	}
	digit = s[sl - 1] - '0';
	temp = digit + 3;
	ans = min(ans, temp);
	if (digit > 7) {
		temp = digit - 7;
		ans = min(ans, temp);
	}
	digit = s[edgepos] - '0';
	if (digit == 8) {
		ans = min(ans, 1 + maxp[edgepos + 1]);
	}
	digit = s[0] - '0';
	temp = 7 + (9 - digit);
	ans = min(ans, temp);
	ans = min(ans, ll(7));
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
