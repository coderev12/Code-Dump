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


int maxSum(int &a, int fi, int li, int k, int totalSum) {
	// 2 Options are there
	if (k == 0) {
		return totalSum;
	}
	int op1 = maxSum(a, fi + 2, li, k - 1, totalSum - a[fi] - a[fi + 1]);
	int op2 = maxSum(a, fi, li - 1, k - 1, totalSum - a[li]);
	return max(op1, op2);
}

void coderev()
{
	int n, k;
	cin >> n >> k;

	int a[n];
	int tsum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		tsum += a[i];
	}

	sort(a, a + n);
	cout << maxSum(a, 0, n - 1, k, tsum) << endl;
	// int i = 0;
	// int j = n - 1;
	// while (k-- > 0) {
	// 	cout << tsum  << endl;
	// 	if ((a[i] + a[i + 1]) <= a[j]) {
	// 		tsum -= (a[i] + a[i + 1]);
	// 		i += 2;
	// 	} else {
	// 		tsum -= a[j];
	// 		j--;
	// 	}
	// }
	// cout << tsum << endl;

}

int32_t main() {
	w(x) {
		coderev();
	}
}

