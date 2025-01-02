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
	int n, a, b, c, ans, temp;
	cin >> n >> a >> b >> c;
	int sum = a + b + c;
	ans = n / sum;
	ans = ans * 3;
	if (n % sum == 0) {
		cout << ans << endl;
		return;
	}
	else {
		temp = ans / 3;
		temp = temp * sum;
		if (temp + a >= n) {
			cout << ans + 1 << endl;
			return;
		}
		if (temp + a + b >= n) {
			cout << ans + 2 << endl;
			return;
		}
		if (temp + a + b + c >= n) {
			cout << ans + 3 << endl;
			return;
		}
	}
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
