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
	int n, m;
	cin >> n >> m;
	int cards[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> cards[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		sort(cards[i], cards[i] + m);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m - 1; j++) {
			if (cards[i][j] + n != cards[i][j + 1]) {
				cout << -1 << endl;
				return;
			}
		}
	}
	int order[n];
	for (int i = 0; i < n; i++) {
		order[cards[i][0]] = i + 1;
	}
	for (int i = 0; i < n; i++) {
		cout << order[i] << " ";
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
