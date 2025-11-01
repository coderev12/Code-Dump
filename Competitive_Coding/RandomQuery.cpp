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
	int a[n], b[n];
	int max1 = INT_MIN;
	int max2 = INT_MIN;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		max1 = max(max1, a[i]);
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		max2 = max(max2, b[i]);
	}
	bool ans = true;
	for (int i = 0; i < n - 1; i++) {
		if ((a[i] <= a[n - 1] && b[i] <= b[n - 1]) || (b[i] <= a[n - 1] && a[i] <= b[n - 1])) {
			continue;
		} else {
			ans = false;
			break;
		}


	}
	if (ans) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

}

int32_t main() {
	w(x) {
		coderev();
	}
}

