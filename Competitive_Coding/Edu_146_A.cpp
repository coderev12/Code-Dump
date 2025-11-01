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
	int n, k;
	cin >> n >> k;



	if (n % 2 == 0) {
		cout << "YES" << endl;
	} else if (n % k == 0) {
		cout << "YES" << endl;
	} else {
		while (n > ) {
			n -= 2;
		}
		if (n % k == 0) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}

int32_t main() {
	w(x) {
		coderev();
	}
}

