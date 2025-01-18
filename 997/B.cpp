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
	string adj[n];
	for (int i = 0; i < n; i++)
		cin >> adj[i];
	int perm[n];
	for (int i = 0; i < n; i++) {
		int pos = 0;
		for (int j = 0; j < n; j++) {
			if (i == j)
				continue;
			if (adj[i][j] == '1' and i > j)
				pos++;
			if (adj[i][j] == '0' and i < j)
				pos++;
		}
		perm[pos] = i + 1;
	}
	for (int i = 0; i < n; i++)
		cout << perm[i] << " ";
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
