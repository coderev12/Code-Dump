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


// N!/K^x
// minimum value of x to get the number divisible



void coderev()
{
	int ans = INT_MAX;
	int n, k;
	cin >> n >> k;
	// cout << n << k << endl;
	// Find all the prime factor as well as their power in k
	int occ = 0;
	for (int i = 2; (i * i) <= k; i++) {

		if (k % i == 0) {
			occ = 0;
			while (k % i == 0) {
				occ++;
				k = k / i;
			}
			int temp = 0;
			int p = i;
			while (p <= n) {
				temp += n / p;
				p = p * i;
			}
			ans = min(ans, temp / occ);
		}
		// Formmula = N/i + N/i^2 + N/i^3..

	}
	if (k > 1) {
		// cout << ans << endl;
		int p = k;
		int cnt = 0;
		while (p <= n) {
			// cout << cnt << endl;
			cnt += (n / p);
			p *= k;
		}
		// cout << cnt << " " << ans;

		ans = min(ans, cnt);
	}
	if (ans == INT_MAX) {
		ans = 0;
	}
	cout << ans << endl;
	// return 0;

}

int32_t main() {
	// w(x) {
	coderev();
	// }
}

