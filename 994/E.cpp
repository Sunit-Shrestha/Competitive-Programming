#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define all(v) v.begin(), v.end()

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;
int n, half;

int query(int l, int r) {
	int x;
	cout << "? " << l << " " << r << endl;
	cin >> x;
	return x;
}

int bin_search(int l, int r) {
	if (l == r)
		return l;
	int k = (l + r - 1) / 2;
	if (k <= n / 2) {
		if (half) {
			if (query(1, k) == 0)
				return bin_search(k + 1, r);
			else
				return bin_search(l, k);
		}
		else {
			if (query(n - k + 1, n) == 0)
				return bin_search(k + 1, r);
			else
				return bin_search(l, k);
		}
	}
	else {
		if (half) {
			if (query(n - k + 1, n) == 1)
				return bin_search(k + 1, r);
			else
				return bin_search(l, k);
		}
		else {
			if (query(1, k) == 1)
				return bin_search(k + 1, r);
			else
				return bin_search(l, k);
		}
	}
}

int sol() {
	cin >> n;
	int ans1, ans2;
	ans1 = query(1, n / 4);
	ans2 = query(n / 4 + 1, n / 2);
	if (ans1 == ans2) {
		half = 1;
		if (ans1 == 0) {
			if (query(1, n / 2) == 0)
				return bin_search(n / 2 + 1, n);
			else
				return bin_search(n / 4 + 1, n / 2);
		}
		else {
			return bin_search(1, n / 4);
		}
	}
	else {
		half = 0;
		return bin_search(1, n);
	}
}

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
     	int k = sol();
		 	cout << "! " << k << endl;
    }

    return 0;
}
