#include <bits/stdc++.h>
// #include <ext/pb_ds/detail/resize_policy/hash_standard_resize_policy_imp.hpp>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

using namespace std;

#define ff first
#define ss second
#define int long long
#define pb push back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int> >
#define setbits(x)  __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed<<setprecision(y)<< x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)   int x; cin>>x; while(x--)


// Count the number of ways to tile the floor
// of size 1 x m
//

int countTile(int n, int m) {
	// 1xm
	// if (n == 0 || m == 0) {
	// 	return 1;
	// }
	if (n == 0) {
		return 1;
	}
	if (n < 0) {
		return 0;
	}
	int op1 = countTile(n - 1, m) % mod;
	int op2 = 0;
	if (n >= m) {
		op2 = countTile(n - m, m) % mod;
	}
	return (op1 + op2) % mod;
}
int32_t main() {
	w(x) {
		int n, m;
		cin >> n >> m;
		// int ans = 1;
		// if (n % m == 0) {
		// 	ans++;
		// }
		// cout << ans << endl;
		cout << countTile(n, m) << endl;
	}

	// int n,m;
	// cin >> n >> m;
	// cout << countTile(n,m);
}

