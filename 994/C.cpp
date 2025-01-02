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
	int n, x, y;
	cin >> n >> x >> y;
	int a[n];

	if (n % 2 == 0) {
		for (int i = 0; i < n; i++)
			a[i] = i % 2;
		if (a[x - 1] == a[y - 1]) {
			a[x - 1] = 2;
		}
	}
	else {
		int set2 = 0;
		for (int i = 0; i < n; i++) {
			a[i] = (i + set2) % 2;
			if (i == x - 1) {
				a[i] = 2;
				set2 = 1;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
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
