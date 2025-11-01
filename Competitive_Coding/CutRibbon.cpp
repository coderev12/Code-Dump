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

// Polycarpus has a ribbon, its length is n. He wants to cut the ribbon in a way that fulfils the following two conditions:

// After the cutting each ribbon piece should have length a, b or c.
// After the cutting the number of ribbon pieces should be maximum.
// Help Polycarpus and find the number of ribbon pieces after the required cutting.


// Input
// 5 5 3 2

// Output
// 2


// int RecursivemaxR(int n, int a, int b, int c) {

// 	if (n == 0) {
// 		return 0;
// 	}
// 	if (n < 0) {
// 		return 0;
// 	}

// 	return 1 + max(RecursivemaxR(n - a, a, b, c), RecursivemaxR(maxR(n - b, a, b, c), RecursivemaxR(n - c, a, b, c)));
// }
void coderev()
{
	int n, a, b, c;

	cin >> n >> a >> b >> c;


	int dp[4000] = {0};

	dp[0] = 0;

	for (int i = 1; i <= n; i++) {
		dp[i] = 1 + max((i - a >= 0) ? dp[i - a] : INT_MIN, max((i - b >= 0) ? dp[i - b] : INT_MIN, (i - c >= 0) ? dp[i - c] : INT_MIN));

	}
	cout << dp[n] << endl;

}


int32_t main() {
	// w(x) {
	coderev();
	// }
}

