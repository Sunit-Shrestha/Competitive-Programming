#include <iostream>

using namespace std;

long long run() {
	long long n, b, c;
	cin >> n >> b >> c;
	if (n == 1 and c == 0) return 0;
	if (b == 0) {
		if (c < n - 2) return -1;
		else if (c == n - 2 or c == n - 1) return n - 1;
		else return n;
	}
	if (c >= n) return n;
	return n - ((n - c - 1) / b + 1);
}

int main() {
	int t;
	cin >> t;	
	while (t--) {
		cout << run() << endl;
	}
}