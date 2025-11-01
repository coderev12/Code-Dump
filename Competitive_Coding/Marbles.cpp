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

// int fac(int n) {
// 	if (n == 1 || n == 0) {
// 		return 1;
// 	}
// 	return n * fac(n - 1);
// }

void coderev()
{
	int n, r;
	cin >> n >> r;
	// // cout << n;
	// int n1 = n - 1;
	// for (int i = n - 2; i > (n - k); i--) {
	// 	// cout << i << endl;
	// 	n1 *= i;
	// }
	// cout << n1 / fac(k - 1)  << endl;
	n = n - 1;
	r = r - 1;
	int res = 1, i;
	if (r > (n / 2)) {
		r = n - r;
	}
	for (i = 0; i < r; i++) {
		res *= n;
		res /= (i + 1);
		n--;
	}
	cout << res << endl;
}

int32_t main() {
	w(x) {
		coderev();
	}
}

