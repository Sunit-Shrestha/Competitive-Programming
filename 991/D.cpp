#include <iostream>
#include <string>

using namespace std;

void solve() {
	string s;
	cin >> s;
	int n = s.length();
	while(n != 0) {
		int dig = s[0] - '0';
		int idx = 0;
		for (int i = 1; i < 9 - dig && i < n; i++) {
			if (s[i] - '0' - i > dig) {
				dig = s[i] - '0' - i;
				idx = i;
			}
		}
		cout << dig;
		s.erase(s.begin() + idx);
		n--;
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}