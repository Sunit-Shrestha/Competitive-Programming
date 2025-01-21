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
	long long ans;
	int n;
	cin >> n;
	int a[n + 1];
	a[0] = 0;
	for (int i = 1; i <= n; i++) cin >> a[i];
	long long confh[n + 1], confl[n + 1];
	confh[0] = 0;
	confl[0] = 0;
	confh[1] = !a[1];
	confl[1] = 1;
	for (int i = 2; i <= n; i++) {
		confl[i] = confh[i - 1];
		confh[i] = 0;
		if (a[i - 1] == a[i]) confh[i] += confh[i - 1];
		if (a[i - 2] + 1 == a[i]) confh[i] += confl[i - 1];
		confh[i] = confh[i] % 998244353;
	}
	ans = confh[n] + confl[n];
	cout << ans % 998244353 << endl;
	// cout << "Start" << endl;
	// for (int i = 1; i <= n; i++) {
	// 	cout << confl[i] << " " << confh[i] << endl;
	// }
	// cout << "End" << endl;
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