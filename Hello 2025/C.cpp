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
	ll l, r;
	cin >> l >> r;
	ll a, b, c, p = 0;
	while (r >= pow(2, p)) {
		p++;
	}
	p--;
	bitset<30> lb(l), rb(r), mb(0);
	while(rb[p] == lb[p]) {
		mb[p] = rb[p];
		p--;
	}
	if (r == pow(2, p) + mb.to_ullong()) {
		b = r;
		cout << b - 2 << " " << b - 1 << " " << b << endl;
	}
	else if (l == pow(2, p) + mb.to_ullong()) {
		b = l;
		cout << l + 2 << " " << l + 1 << " " << l << endl;		
	}
	else {
		b = pow(2, p) + mb.to_ullong();
		cout << b - 1 << " " << b << " " << b + 1 << endl; 
	}
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