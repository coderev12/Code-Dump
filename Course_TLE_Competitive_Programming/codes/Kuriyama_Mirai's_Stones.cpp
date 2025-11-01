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
#define vi vector<long long>
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
	int y[n];
	int p[n];

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a[i] = x;
		y[i] = a[i];
		p[i] = a[i];
		if (i > 0) {
			p[i] += p[i - 1];
		}
	}
	sort(y, y + n);
	for (int i = 0; i < n; i++) {
		if (i > 0) {
			y[i] += y[i - 1];
		}
	}

	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int j, k, l;
		cin >> j >> k >> l;
		if (j == 1) {
			if (k - 1 > 0) {
				cout << p[l - 1] - p[k - 2] << endl;
			} else {
				cout << p[l - 1] << endl;;
			}
		} else {
			if (k - 1 > 0) {
				cout << y[l - 1] - y[k - 2] << endl;
			} else {
				cout << y[l - 1] << endl;
			}
		}
	}


}

int32_t main() {
	// w(x) {
	coderev();
	// }
}

