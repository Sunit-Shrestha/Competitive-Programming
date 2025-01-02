#include <iostream>
#include <string>
// #include <unordered_set>

using namespace std;

// void populate(unordered_set<int>& diff, int twos, int threes, int sum) {
// 	diff.insert(sum);
// 	if (twos > 0) {
// 		populate(diff, twos - 1, threes, sum + 2);
// 	}
// 	if (threes > 0) {
// 		populate(diff, twos, threes - 1, sum + 6);
// 	}
// }

void solve() {
	string num;
	cin >> num;
	int sum = 0, twos = 0, threes = 0;
	for (char c : num) {
		sum += c - '0';
		if (c == '2') {
			twos++;
		}
		else if (c == '3') {
			threes++;
		}
	}
	// unordered_set<int> diff;
	// populate(diff, twos, threes, sum);
	// for (int x : diff) {
	// 	if (x % 9 == 0) {
	// 		cout << "YES" << endl;
	// 		return;
	// 	}
	// }
	// cout << "NO" << endl;
	int rem = sum % 9;
	if (rem == 0) {
		cout << "YES" << endl;
		return;
	}
	for (int i = 0; i <= twos && i < 9; i++) {
		for (int j = 0; j <= threes && j < 3; j++) {
			if ((rem + i * 2 + j * 6) % 9 == 0) {
				cout << "YES" << endl;
				return;
			}
		}
	}
	cout << "NO" << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}