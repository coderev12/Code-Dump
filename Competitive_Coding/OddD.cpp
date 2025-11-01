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



// 10 => 5, 2
// 11 => 11, 1
// 12 => 3, 2, 6, 1

// 1100
// 1 1 0 1
// 3 2 1 0



void coderev()
{
	int n;
	cin >> n;

	if (n == 1) {
		cout << "NO" << endl;
	} else {
		// cout << setbits(n) << endl;
		if (setbits(n) == 1) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}

}

int32_t main() {
	w(x) {
		coderev();
	}
}

