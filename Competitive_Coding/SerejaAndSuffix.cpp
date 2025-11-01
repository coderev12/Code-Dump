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
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed<<setprecision(y)<< x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)   int x; cin>>x; while(x--)


//
void coderev()
{
	int n, m;
	cin >> n >> m;
	int a[n];
	int b[n];
	set<int> s;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a[i] = x;
	}
	for (int i = n - 1; i >= 0; i--) {
		s.insert(a[i]);
		b[n - i - 1] = s.size();
	}

	for (int i = 0; i < m; i++) {
		int y;
		cin >> y;
		cout << b[n - y] << endl;
	}

}

int32_t main() {
	// w(x) {
	coderev();
	// }
}

