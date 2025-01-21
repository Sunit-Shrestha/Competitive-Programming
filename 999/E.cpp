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
	int n, m, k;
	cin >> n >> m >> k;
	int a[n], b[n];
	int red[n];
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i]; 
		sum = sum + a[i];
	}
	for (int i = 0; i < m; i++) cin >> b[i];
	for (int i = 0; i < n; i++) {
		int temp, fin = -1;
		for (int j = 0; j < m; j++) {
			temp = a[i] & b[j];
			cout << temp << endl;
			temp = a[i] - (a[i] & b[j]);
			if (temp > fin) {
				fin = temp;
			}
		}
		red[i] = fin;
	}
	sort(red, red + n);
	for (int i = n - 1; i > n - 1 - k and i >= 0; i--) {
		sum = sum - red[i];
	}
	cout << "SUM" << sum << endl;
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
