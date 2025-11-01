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
	int store[100001] = {0};
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n);
	int freq = 0;
	int index = 0;
	for (int i = 1; i <= 100000; i++) {
		if (i == a[index]) {
			freq++;
			index++;
		}
		store[i] = freq;
	}
	for (int i = 0; i <= 1e5; i++) {
		cout << store[i] << endl;
	}

	int q;
	cin >> q;

	for (int i = 0; i < q; i++) {
		int x;
		cin >> x;
		if (x > 1e5) {
			cout << n << endl;
		} else {
			cout << store[x] << endl;
		}

	}
}

int32_t main() {
	// w(x) {
	coderev();
	// }
}

