#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n, k, l, idx = 0;
  cin >> n >> k >> l;
	k *= 2;
	l *= 2;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
		a[i] *= 2;
  }
  int p, t, s1, s2;
  t = a[0];
	idx++;
  p = k;
  s1 = 0;
  while (p < l and idx < n) {
    s2 = a[idx];
		idx++;
    if (abs(s2 - p) <= t) {
      s1 = p;
      p = s1 + k;
    }
    else if (s2 < p and p - (s2 + t) < k) {
      s1 = s2 + t;
      p = s1 + k;
    }
    else if (s2 < p) {
			s1 = s2 + t;
    }
    else {
			if ((s2 - t + p) / 2 > l) {
				break;
			}
      s1 = (s2 - t + p) / 2;
      t += (s2 - t - p) / 2;
      p = s1 + k;
    }
	}
	if (p < l) {
    t += l - p;
  }
  cout << t << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}