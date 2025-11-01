#include <bits/stdc++.h>
// #include <ext/pb_ds/detail/resize_policy/hash_standard_resize_policy_imp.hpp>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

using namespace std;

#define ff first
#define ss second
#define int long long int
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

	int n, m;
	cin >> n >> m;
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if (x1 == 1 || x1 == n || y1 == 1 || y1 == m || x2 == 1 || x2 == n || y2 == 1 || y2 == m) {
		if ((x1 == 1 && y1 == 1) ||
		        (x1 == n && y1 == 1) ||
		        (x1 == 1 && y1 == m) ||
		        (x1 == n && y1 == m) ||
		        (x2 == 1 && y2 == 1) ||
		        (x2 == n && y2 == 1) ||
		        (x2 == 1 && y2 == m) ||
		        (x2 == n && y2 == m)
		   ) {
			cout << 2 << endl;
		} else {
			cout << 3 << endl;
		}

	} else {
		cout << 4 << endl;
	}

}

int32_t main() {
	w(x) {
		coderev();
	}
}

