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
	int n, d;
	cin >> n >> d;
	cout << 1 << " ";
	if (d == 3 or d == 6 or d == 9 or n >= 3)
		cout << 3 << " ";
	if (d == 5 or d == 0)
		cout << 5 << " ";
	if (d == 7 or n >= 3)
		cout << 7 << " ";
	if ((d == 9) or
	    (d == 6 and n >= 3) or
			(d == 3 and n >= 3) or
			(n >= 6))
		cout << 9 << " ";
	cout << endl;
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
