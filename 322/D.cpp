#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define all(v) v.begin(), v.end()

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;
char c[3] = {'A', 'B', 'C'};

void solve() {
	int dim[3][2];
	cin >> dim[0][0] >> dim[0][1] >> dim[1][0] >> dim[1][1] >> dim[2][0] >> dim[2][1];
	for (int mask = 0; mask < (1 << 3); mask++) {
		int x[3], y[3];
		bool maskval;
		for(int i = 0; i < 3; i++) {
			maskval = mask & (1 << i);
			x[i] = dim[i][maskval];
			y[i] = dim[i][!maskval];
			// cout << x[i] << " " << y[i] << "\n";
		}
		// cout << "finish" << "\n";
		if (x[0] == x[1] and x[1] == x[2] and x[0] == y[0] + y[1] + y[2]) {
			cout << x[0] << "\n";
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < y[i]; j++) {
					for (int k = 0; k < x[i]; k++) {
						cout << c[i];
					}
					cout << "\n";
				}
			}
			return;
		}
		else if (y[0] == y[1] and y[1] == y[2] and y[0] == x[0] + x[1] + x[2]) {
			cout << y[0] << "\n";
			for (int i = 0; i < y[0]; i++) {
				for (int j = 0; j < 3; j++) {
					for (int k = 0; k < x[j]; k++) {
						cout << c[j];
					}
				}
				cout << "\n";
			}
			return;
		}
		else {
			for (int i = 0; i < 3; i++) {
				if (x[(i+1)%3] == x[(i+2)%3] and x[i] + x[(i+1)%3] == y[i] and y[i] == y[(i + 1) % 3] + y[(i + 2) % 3]) {
					cout << y[i] << "\n";
					for (int j = 1; j <= 2; j++) {
						for (int k = 0; k < y[(i + j) % 3]; k++) {
							for (int l = 0; l < x[i]; l++) cout << c[i];
							for (int l = 0; l < x[(i + j) % 3]; l++) cout << c[(i + j) % 3];
							cout << "\n";
						}
					}
					return;
				}
			}

			for (int i = 0; i < 3; i++) {
				if (y[(i+1)%3] == y[(i+2)%3] and y[i] + y[(i+1)%3] == x[i] and x[i] == x[(i + 1) % 3] + x[(i + 2) % 3]) {
					cout << x[i] << "\n";
					for (int j = 0; j < y[i]; j++) {
						for (int k = 0; k < x[i]; k++) cout << c[i];
						cout << "\n";
					}
					for (int j = 0; j < y[(i + 1) % 3]; j++) {
						for (int k = 0; k < x[(i + 1) % 3]; k++) cout << c[(i + 1) % 3];
						for (int k = 0; k < x[(i + 2) % 3]; k++) cout << c[(i + 2) % 3];
						cout << "\n";
					}
					return;
				}
			}
		}
	}
	cout << -1 << "\n";
}

int main() {
	fast_io;
	solve();
	return 0;
}
