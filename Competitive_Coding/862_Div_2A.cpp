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
		// cin >> a[i];
	}
	int k = 0;
	int num = 0;
	for (int i = 0; i < 8; i++) {
		int count1 = 0;
		int count2 = 0;
		for (int j = 0; j < n; j++) {
			// if (a[j] == 0) {
			// 	continue;
			// }
			// cout << a[j] << endl;
			if (a[j] & 1) {
				count1++;
			} else {
				count2++;
			}
			a[j] = a[j] >> 1;
		}
		// cout << count1 << " " <<  count2 << endl;
		if ((count1 & 1) && (count2 & 1)) {
			// cout << "Hi";
			cout << -1 << endl;
			return;
		} else {
			if ((count1 & 1)) {
				num += pow(2, k);
			}
		}
		k++;
	}

	cout << num << endl;
}

int32_t main() {
	w(x) {
		coderev();
	}
}

