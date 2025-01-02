#include <iostream>
#include <deque>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int ti = 0; ti < t; ti++) {
		int n;
		bool contains, left_end = false;
		cin >> n;
		deque<char> s;
		cout << "? 0" << endl;
		cout.flush();
		cin >> contains;
		if (contains)
			s.push_back('0');
		else
			s.push_back('1');
		while (!left_end && s.size() < n) {
			cout << "? " << "0";
			for (char c : s) cout << c;
			cout << endl;
			cout.flush();
			cin >> contains;
			if (contains) {
				s.push_front('0');
			}
			else {
				cout << "? " << "1";
				for (char c : s) cout << c;
				cout << endl;
				cout.flush();
				cin >> contains;
				if (contains) {
					s.push_front('1');
				} else {
					left_end = true;
				}
			}
		}
		while (s.size() < n)  {
			cout << "? ";
			for (char c : s) cout << c;
			cout << "0" << endl;
			cout.flush();
			cin >> contains;
			if (contains) {
				s.push_back('0');
			}
			else {
				s.push_back('1');
			}
		}
		cout << "! ";
		for (char c : s) cout << c;
		cout << endl;
	}
	return 0;
}