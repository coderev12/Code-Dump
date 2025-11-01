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
	int n, l;
	cin >> n >> l;

	double a[n];
	bool presentZero = false;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 0) {
			presentZero = true;
		}
	}
	sort(a, a + n);
	double maxDif = 0.0;

	if (n == 1) {
		cout << max(l - a[0], a[0]);
		return;
	}
	for (int i = 1; i < n; i++) {
		double dif = (double)a[i] - (double)a[i - 1];
		// cout << dif << endl;
		if (dif > maxDif) {
			maxDif = dif;
		}
	}
	double ans = (double)maxDif / 2.00;
	if (presentZero) {
		cout << setprecision(9) << ans << endl;
	} else {
		double d = a[0];
		if (a[n - 1] != l) {
			double v = l - a[n - 1];
			cout << setprecision(9) << max(ans, max(d, v)) <<  endl;
		} else {
			cout << setprecision(9) << max(ans, d) <<  endl;
		}

	}



	// cout << n1 << " " << n2;


}

int32_t main() {
	// w(x) {
	coderev();
	// }
}

