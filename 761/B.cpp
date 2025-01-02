#include <iostream>
#include <numeric>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int tc = 0; tc < t; tc++) {
		int n;
		int count = 1;
		bool found = false;
		cin >> n;
		if (n % 2 == 0) {
			cout << "2 " << n - 3 << " 1" << endl;
		}
		else {
			while (true) {
				int a = 2 * count + 1;
				if (gcd(a, n - a - 1) == 1){
					cout << a << " " << n - a - 1 << " 1" << endl;
					break;
				}
				count++;
			}
		}
	}
	return 0;
}