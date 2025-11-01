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


// It is a sliding window problem


void coderev()
{
	int n, k;

	cin >> n >> k;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 1;
	int prevSum = 0;
	int minSum = 0;
	for (int i = 0; i < k; i++) {
		prevSum += a[i];
	}
	minSum = prevSum;
	for (int i = k; i < n; i++) {
		int csum = prevSum - a[i - k] + a[i];
		// cout << csum << " " << prevSum << " " << minSum << endl;
		prevSum = csum;
		//
		if (csum < minSum) {
			// cout << minSum << endl;
			ans = i - k + 2;
			minSum = csum;
		}
	}
	cout << ans << endl;

}

int32_t main() {
	// w(x) {
	coderev();
	// }
}

