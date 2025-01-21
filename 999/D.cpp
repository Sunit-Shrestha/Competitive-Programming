#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define all(v) v.begin(), v.end()

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;

int binarySearch(vector<int>& arr, int target) {
	int left = 0, right = arr.size() - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (arr[mid] == target) {
			return mid; 
		}
		if (arr[mid] < target) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return -1;
}

bool div(vector<int>& a, int x) {
	int half = x / 2;
	bool res;
	if (half == 0) return false;
	int idx = binarySearch(a, half);
	if (idx == -1) {
		res = div(a, half);
		if (!res) return false;
	}
	else {
		a.erase(a.begin() + idx);
	}
	if (x % 2 == 1) half++;
	idx = binarySearch(a, half);
	if (idx == -1) {
		res = div(a, half);
		if (!res) return false;
	}
	else {
		a.erase(a.begin() + idx);
	}
	return true;
}

void solve() {
	int n, m;
	cin >> n >> m;
	int at[n], bt[m];
	for (int i = 0; i < n; i++) cin >> at[i];
	for (int i = 0; i < m; i++) cin >> bt[i];
	sort(at, at + n);
	sort(bt, bt + m);
	vector<int> a, b;
	int ai = 0, bi = 0;
	while (ai < n and bi < m) {
		if (at[ai] == bt[bi]) {
			ai++;
			bi++;
		}
		else if (at[ai] < bt[bi]) {
			a.pb(at[ai]);
			ai++;
		}
		else {
			b.pb(bt[bi]);
			bi++;
		}
	}
	while (ai < n) {
		a.pb(at[ai]);
		ai++;
	}
	while (bi < m) {
		b.pb(bt[bi]);
		bi++;
	}
	if (b.size() == 0 and a.size() != 0) {
		cout << "NO" << endl;
		return;
	}
	for (int i = 0; i < b.size(); i++) {
		if (!div(a, b[i])) {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
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
