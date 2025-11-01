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


// 2
// 2 1
void solve()
{
	int n;
	cin >> n;
	int a[n];

	int freq1 = 0, freq2 = 0, freq3 = 0, freq4 = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 1) {
			freq1++;
		}
		if (a[i] == 2) {
			freq2++;
		}
		if (a[i] == 3) {
			freq3++;
		}
		if (a[i] == 4) {
			freq4++;
		}
	}
	// freq3 -= freq1 % 4;

	int totalT = (freq1 / 4) + (freq2 / 2) + freq4;
	if (freq2 % 2 != 0) {
		totalT++;
		freq1--;
	}
	int rem1 = (freq1 % 4);
	if (rem1 > freq3) {
		totalT += rem1;
	} else {
		totalT += freq3;
	}
	cout << totalT << endl;

	// 1 2 3 3 4





}

int32_t main() {
	// w(x) {
	solve();
	// }
}

