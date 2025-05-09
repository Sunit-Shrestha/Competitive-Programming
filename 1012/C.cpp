#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define all(v) v.begin(), v.end()
#define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> 

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;

void solve() {
	int n;
	cin >> n;
	vector<int> t(n);
	for (auto& f : t) cin >> f;

	set<tuple<int, int, int>> cells; // cost, x, y
	set<tuple<int, int, int>> tables;
	int count = 0;
	for (int dist = 2; count <= 2 * n; dist += 3) {
		for (int x = 1; x < dist; x += 3) {
			int y = dist - x;
			cells.insert({x + y, x, y});
			cells.insert({x + y + 1, x + 1, y});
			cells.insert({x + y + 1, x, y + 1});
			cells.insert({x + y + 4, x + 1, y + 1});	
			tables.insert({x + y, x, y});
			count++;
		}
	}

	for (int i = 0; i < n; i++) {
		if (t[i]) {
		//emptycell
			auto it = cells.begin();
			int x = get<1> (*it), y = get<2> (*it);
			cout << x << " " << y << "\n";	
			if ((x - 1) % 3 == 0 and (y - 1) % 3 == 0) tables.erase(*it);
			cells.erase(it);
		}
		else {
		//emptytable
			auto it = tables.begin();
			int x = get<1> (*it), y = get<2> (*it);
			cout << x << " " << y << "\n";
			cells.erase(*it);	
			tables.erase(it);
		}
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