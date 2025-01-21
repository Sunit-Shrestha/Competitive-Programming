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
	int n, k;
	cin >> n >> k;
	int x[n];
	for (int i = 0; i < n; i++) 
		cin >> x[i];
	sort(x, x + n);
	int fidx = 0, lidx = n - 1;
	int ans = 0;
	while(fidx < lidx) {
		if (x[fidx] + x[lidx] == k) ans++, fidx++, lidx--;
		else if (x[fidx] + x[lidx] < k) fidx++;
		else lidx--;
	}
	cout << ans << endl;
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
