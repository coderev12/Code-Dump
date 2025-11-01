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


int count_set_bits(int n) {
	int count = 0;
	while (n > 0) {
		count++;
		n = n & (n - 1);
	}
	return count;
}

void coderev()
{

	// Main code
	int n;
	cin >> n;
	int a[n];
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int m;
		cin >> m;
		a[i] = m;
		ans ^= m;
	}
	// cout << ans;
	// find the pos of the first set bit in ans
	int temp = ans;
	int pos = 0;
	while ((temp & 1) != 1) {
		pos++;
		temp = temp >> 1;
	}
	// cout << pos << endl;

	int mask = 1 << pos;
	int fn = 0;
	for (int i = 0; i < n; i++) {
		if ((a[i] & mask) > 0) {
			// cout << a[i] << " ";
			fn ^= a[i];
		}
	}
	int sn = fn ^ ans;
	cout << min(fn, sn) << " " << max(fn, sn) << endl;

}


int32_t main() {
	// w(x) {
	// 	coderev();
	// }
	coderev();
}

