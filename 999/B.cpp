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


void solve() {
	int n;
	cin >> n;
	set<int> s;
	vector<int> a(n);
	int p = -1, q = -1, count = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (s.count(a[i])) {
			if (a[i] > p) p = a[i], count = 1;
			if (a[i] == p) count++;
			if (p != -1 and p != a[i]) q = a[i];
			else if (count == 4) q = a[i];

		}
		else {
			s.insert(a[i]);
		}
	}
	if (p == -1) {
		cout << -1 << endl;
		return;
	}
	if (q != -1) {
		cout << p << " " << p << " " << q << " " << q << endl;
		return;
	}
	sort(all(a));
	int idx1, idx2;
	idx1 = binarySearch(a, p);
	idx2 = a[idx1 - 1] == p ? idx1 - 1 : idx1 + 1;
	for (int j = n - 1; j >= 0; j--) {
		if (j == idx1 or j == idx2) continue;
		int low = a[j] - 2 * p, i = j - 1;
		while (i == idx1 or i == idx2) i--;
		if (i >= 0 and a[i] > low) {
			cout << p << " " << p << " " << a[j] << " " << a[i] << endl;
			return;
		}
	}
	cout << -1 << endl;
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
