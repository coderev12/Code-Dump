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
	int n, u;
	cin >> n >> u;
	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			a[i][j] = x;
		}
	}
	int nk = 0;
	int k = 0;
	int l = n - 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[k][j] != a[l][n - j - 1]) {
				nk++;
			}
			cout << k + 1 << " " << j + 1 << endl;
			cout << l + 1 << " " <<  n - j << endl;
		}
		k++;
		l--;
	}
	if (nk <= u) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}

int32_t main() {
	w(x) {
		coderev();
	}
}

