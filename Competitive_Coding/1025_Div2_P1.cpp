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

	int x;
	cin >> x;
	int y[x];
	int c = 0;

	for (int i = 0; i < x; i++) {
		int m;
		cin >> m;
		if (m == 1) c++;
		y[i] = m;
	}
	if (c == x) {
		cout << "YES" << endl;
		return;
	}
	if ((y[0] == 0 && y[1] == 0)) {
		cout << "YES" << endl;
		return;
	}

	for (int i = 0; i < x - 1; i++) {
		if (y[i] == 0 && y[i + 1] == 0) {
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
}

int32_t main() {
	w(x) {
		coderev();
	}
}

