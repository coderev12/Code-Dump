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

	vi a(n);

	for (auto &it : a) cin >> it;

	vi prefix(n);
	prefix[0] = a[0];

	vi prefix2(n);
	prefix2[0] = a[0];
	for (int i = 1; i < n; i++) {
		prefix[i] += prefix[i - 1] + a[i];
		prefix2[i] += ((i + 1) * a[i]) + prefix2[i - 1];
	}

	// calculate

	int l, r;
	cin >> l >> r;
	int p1 = prefix[r];
	// Calulate the prefix sum of l to r
	if (l > 0) {
		p1 -= prefix[l - 1];
	}
	// cout << p1 << endl;

	int  p2 = prefix2[r];
	// Calulate the A*prefix sum of l to r
	if (l > 0) {
		p2 -= prefix2[l - 1];
	}
	cout << p2 - (l)*p1;

}

int32_t main() {
	w(x) {
		coderev();
	}
}

