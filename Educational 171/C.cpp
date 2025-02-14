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
	string s;
	cin >> s;
	ll disc[n];
	ll discit = 0;
	ll totdisc = 0;
	for (ll i = s.size() - 1; i >= 0; i--) {
		if (discit == n / 2) break;
		if (s[i] == '1') {
			totdisc += i + 1;
			disc[discit] = i + 1;
			discit++;
		}	
	}
	ll ans = n * (n + 1) / 2 - totdisc;
	ll count = 0;
	for (ll i = discit - 1; i >= 0; i--) {
		count++;
		if (count <= disc[i] / 2) continue;	
		discit--;
		count--;
		ans += disc[discit];
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
