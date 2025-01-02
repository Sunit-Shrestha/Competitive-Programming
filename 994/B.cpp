#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define all(v) v.begin(), v.end()

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;

void solve() {
	int n;
	string str;
	cin >> n >> str;
	int p[n], s[n], lim[n];
	bool gotp = false;
	for (int i = 0; i < n; i++) {
		char c = str[i];
		p[i] = s[i] = lim[i] = n;
		if (c == 'p') {
			gotp = true;
			p[i] = i + 1;
		}
		if (gotp and c == 's') {
			cout << "NO" << endl;
			return;
		}
		if (c == 's') {
			s[i] = n - i;
		}
	}
	int t = n;
	for (int i = 0; i < n; i++) {
		if (s[i] < t)
			t = s[i];
		lim[i] = (lim[i] < t) ? lim[i] : t;
	}
	t = n;
	for (int i = n - 1; i >= 0; i--) {
		if (p[i] < t)
			t = p[i];
		lim[i] = (lim[i] < t) ? lim[i] : t;
	}
	unordered_set<int> used;
	for (int i = 0; i < n; i++) {
		t = lim[i];
		while(used.find(t) != used.end()) {
			t--;
		}
		if (t == 0) {
			cout << "NO" << endl;
			return;
		}
		used.insert(t);
	}
	cout << "YES" << endl;
	return;
}

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
      solve();
    }

    return 0;
}
