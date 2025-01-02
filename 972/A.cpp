#include <iostream>
using namespace std;

int main() {
	string vowels[5] = {"a", "e", "i", "o", "u"};
	int remord[5] = {2, 1, 3, 0, 4};
	int t;
	cin >> t;
	for (int tc = 0; tc < t; tc++) {
		string sparts[5];
		int n, q, r;
		string s;
		cin >> n;
		q = n / 5;
		r = n % 5;
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < q; j++) {
				sparts[i] += vowels[i];
			}
		}
		// for (int i = 0; i < 5; i++) {
		// 	cout << sparts[i] << " ";
		// }
		// cout << "testint" <<endl;
		for (int i = 0; i < r; i++) {
			int p = remord[i];
			sparts[p] += vowels[p];
		}
		for (int i = 0; i<5; i++) {
			// cout << sparts[i] << " ";
			s += sparts[i];
		}
		cout << s << endl;
	}
	return 0;
}