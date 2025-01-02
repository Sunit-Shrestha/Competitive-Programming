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
	int a[n], b[n];
	int sum = 0, temp;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n - 1; i++) {
		temp = a[i] - b[i + 1];
		if (temp > 0) {
			sum += temp;
		}
	}
	sum += a[n - 1];
	cout << sum	<< endl;
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
