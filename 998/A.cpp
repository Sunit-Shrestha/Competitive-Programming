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
	int a[4];
	for (int i = 0; i < 4; i++)
		cin >> a[i];
	int fb = 0, fbtemp;
	int a3;
	
	a3 = a[0] + a[1];
	fbtemp = 1;
	if (a[1] + a3 == a[2]) fbtemp++;
	if (a[2] + a3 == a[3]) fbtemp++;
	if (fbtemp > fb) fb = fbtemp;
	
	a3 = a[2] - a[1];
	fbtemp = 1;
	if (a[0] + a[1] == a3) fbtemp++;
	if (a[2] + a3 == a[3]) fbtemp++;
	if (fbtemp > fb) fb = fbtemp;
	
	a3 = a[3] - a[2];
	fbtemp = 1;
	if (a[0] + a[1] == a3) fbtemp++;
	if (a[1] + a3 == a[2]) fbtemp++;
	if (fbtemp > fb) fb = fbtemp;
	
	cout << fb << endl;
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
