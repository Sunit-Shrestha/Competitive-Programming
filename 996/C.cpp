#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  ll n, m, x = 0, sum, pr, pc;
  cin >> n >> m;
  string s;
  cin >> s;
  ll max = -2e18, min = 2e18;
  ll a[n][m];
  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  if (s[0] == 'D') {
    for (int i = 1; i < m; i++) {
      x += a[0][i];
    }
    pr = 1;
    pc = 0;
  }
  else {
    for (int i = 1; i < n; i++) {
      x += a[i][0];
    }
    pr = 0;
    pc = 1;
  }
  a[0][0] = -x;
  for (int i = 1; i < s.length(); i++) {
    sum = 0;
    if (s[i] == 'D') {
      for (int j = 0; j < m; j++) {
        sum += a[pr][j];
      }
      a[pr][pc] = -sum;
      pr++;
    }
    else {
      for (int j = 0; j < n; j++) {
        sum += a[j][pc];
      }
      a[pr][pc] = -sum;
      pc++;
    }
  }
  sum = 0;
  for (int j = 0; j < n; j++) {
    sum += a[j][pc];
  }
  a[pr][pc] = -sum;
  // cout << "Ans: " << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}