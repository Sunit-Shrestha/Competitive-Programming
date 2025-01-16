#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  bool flag = 0;
  int need = 0, have = 2e9;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < n; i++) {
    if (b[i] > a[i]) {
      if (flag == 1) {
        cout << "NO" << endl;
        return;
      }
      flag = 1;
      need = b[i] - a[i];
    }
    else {
      if (a[i] - b[i] < have) {
        have = a[i] - b[i];
      }
    }
  }
  if (have >= need) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}