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


int minM(int n, int a, int b, int m, int dp[]) {
	if (n == 0) {
		dp[n] = 0;
		return dp[n];
	}
	if (n < 0) {
		return INT_MAX;
	}

	if (dp[n] != INT_MAX) {
		return dp[n];
	}
	// n - 1 => minMoney += a
	// n - m => minMoney += b
	int x = a + minM(n - 1, a, b, m, dp);
	int y = b + minM(n - m, a, b, m, dp);
	// cout << dp[n] << endl;
	dp[n] = min(x, y);

	return dp[n];
}

void coderev()
{
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	int x = ((n / m) * b) + min((n % m) * a, b);
	cout << min(x, a * n);

}

int32_t main() {
	// w(x) {
	coderev();
	// }
}

