#include <iostream>

using namespace std;

void run() {
	int n, a, b;
	cin >> n >> a >> b;
	string s;
	cin >> s;
	int x = 0, y = 0;
	int ind;
	if (a == 0 and b == 0) {
		cout << "YES" << endl;
		return;
	}
	for (int i = 0; i < 10000; i++) {
		ind = i % n;
		if (s[ind] == 'N') {
			y++;
		}
		else if (s[ind] == 'S') {
			y--;
		}
		else if (s[ind] == 'E') {
			x++;
		}
		else if (s[ind] == 'W') {
			x--;
		}
		if (x == a and y == b) {
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
}

int main() {
	int t;
	cin >> t;	
	while (t--) {
		run();
	}
}