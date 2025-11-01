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
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int i = 0;
	int maxLen = 0;
	while (i < n) {
		int curLen = 1;
		if (i < n - 1 and a[i] <= a[i + 1]) {
			while (i < n - 1 and a[i] <= a[i + 1]) {
				// cout << i << " "  << endl;
				curLen++;
				i++;
			}

		} else {
			i++;
		}


		maxLen = max(maxLen, curLen);

	}
	cout << maxLen << endl;

}


int32_t main() {
	// w(x) {
	coderev();
	// }
}

