#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define all(v) v.begin(), v.end()

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;

int solve() {
	int n;
	cin >> n;
	// int a[n];
	int x;
	int st = -1, ed = -1, mid = n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (st == -1 and x != 0) {
			st = i;
		}
		if (x != 0) {
			ed = i;
		}
		if (st != -1 and mid == n and x == 0) {
			mid = i;
		}
		// a[i] = x;
	}
	if (st == -1)
		return 0;
	if (mid < ed)
		return 2;
	return 1;
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
