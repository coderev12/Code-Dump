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
	int a[n];
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a[i] = x;
	}
	if (n == 1) {
		cout << 0 << endl;
		return;
	}
	int first = abs(a[0] - a[n - 1]);
	int i = 1;
	int j = n - 2;
	int gcd = 0;
	while (i < j) {
		int d = abs(a[i] - a[j]);
		gcd = __gcd(d, first);
		first = gcd;
		i++;
		j--;
	}
	cout << first << endl;

}

int32_t main() {
	w(x) {
		coderev();
	}
}

