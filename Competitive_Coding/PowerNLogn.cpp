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

int power(int a, int n) {
	if (n == 0) {
		return 1;
	}
	if (n == 1) {
		return a;
	}
	if (n & 1) {
		int x = power(a, n >> 1);
		return a * x * x;
	} else {
		int x = power(a, n >> 1);
		return x * x;
	}
}

void coderev()
{
	int a, n;
	cin >> a >> n;
	cout << power(a, n) << endl;
}

int32_t main() {
	// w(x) {
	coderev();
	// }
}

