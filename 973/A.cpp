#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, x, y;
		cin >> n;
		cin >> x >> y;
		int z = min(x, y);
		int ans = n / z;
		if (n % z != 0) {
			ans++;
		}
		cout << ans << endl;
	}
}