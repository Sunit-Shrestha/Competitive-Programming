#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define all(v) v.begin(), v.end()

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;

ll solve() {
	ll n, m;
	cin >> n >> m;
	ll ans = 1;
	if (n > m) ans += n;
	else ans += m;
	return ans;
}

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
      cout << solve() << endl;
    }

    return 0;
}
