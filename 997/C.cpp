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
	// if (n == 6) {
	// 	cout << "1 1 2 3 1 2" << endl;
	// 	return;
	// }
	// else if (n == 7) {
	// 	cout << "1 1 2 3 4 1 2" << endl;
	// }
	// else if (n == 8) {
	// 	cout << "1 1 2 3 4 5 1 2" << endl;
	// }
	// else if (n == 9) {
	// 	cout << "7 3 3 7 5 3 7 7 3" << endl;
	// 	return;
	// }
	// if (n % 2 == 0) {
	// 	for (int i = 1; i <= (n - 4) / 2 + 4; i++) {
	// 		cout << i << " ";
	// 	}
	// 	for (int i = 1; i <= (n - 4) / 2; i++) {
	// 		cout << i << " ";
	// 	}
	// }
	// else {
	// 	for (int i = 1; i <= (n - 3) / 2 + 3; i++) {
	// 		cout << i << " ";
	// 	}
	// 	for (int i = 1; i <= (n - 4) / 2; i++) {
	// 		cout << i << " ";
	// 	}
	// }
	cout << "1 ";
	for (int i = 1; i <= n - 3; i++) {
		cout << i << " ";
	}
	cout << "1 2" << endl;
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
