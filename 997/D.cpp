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
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll sum = 0;
	ll count[11];
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= 10; j++) {
			count[i] = 0;
		}
		count[a[0]]++;
		count[a[1]]++;
		int idx = i, ridx = i, r = a[0];
		int m1 = a[0], m2 = a[1], add1, add2;
		bool flag = m1 == m2 ? 1 : 0;
		if (flag) sum++;
		for (int j = i + 4; j <= n; j+=2) {
				count[a[j - 2]]++;
				count[a[j - 1]]++;
				if (a[j - 2] < a[j - 1]) {
					add1 = a[j - 2];
					add2 = a[j - 1];
				}
				else {
					add1 = a[j - 1];
					add2 = a[j - 2];
				}
				if (add1 <= m1 and add2 >= m2) {
					idx++;
					if (flag) sum++;
				}
				else if (add1 <= m1 and add2 <= m1) {
					idx += 2;
					if (add1 < r) ridx++;
					if (add2 < r) ridx++;
					if (ridx + count[r] <= idx) {
						ridx += count[r];
					}
				}
				else if (add1 >= m2 and add2 >= m2) {
				}
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
