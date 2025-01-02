#include <iostream>
#include <string>

using namespace std;

void solve() {
	int n, m, k = 0, x = 0;
	cin >> n >> m;
	string s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
		if (s[i].length() + k <= m) {
			k += s[i].length();
			x++;
		}
		else {
			k = m + 1;
		}
	}
	cout << x << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}