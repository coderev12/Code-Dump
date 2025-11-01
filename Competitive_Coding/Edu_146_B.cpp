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
#define mod 1000080007
#define inf 1e18
#define ps(x, y) fixed<<setprecision(y)<< x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)   int x; cin>>x; while(x--)



void coderev()
{
	int x, y;
	cin >> x >> y;

	int k = 1;
	int ans = INT_MAX;
	// for (int i = k; i < sqrt(x); i++) {
	// 	ans = min(ans, ((x / i) + (y / i) + (k - 1)));
	// }
	// for (int i = k; i < sqrt(y); i++) {
	// 	ans = min(ans, ((x / i) + (y / i) + (k - 1)));
	// }
	for (int i = k; i <= sqrt(max(x, y)); i++) {
		ans = min(ans, (ceil(x / i) + ceil(y / i) + (k - 1)));
	}
	cout << ans << endl;

}

int32_t main() {
	w(x) {
		coderev();
	}
}

