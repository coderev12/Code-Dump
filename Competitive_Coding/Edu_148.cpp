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
	string s;
	cin >> s;
	int mid = s.length() / 2;


	if (s.length() & 1) {
		for (int i = 1; i < mid; i++) {
			if (s[i] != s[i - 1]) {
				cout << "YES" << endl;
				return;
			}
		}
		for (int i = mid + 2; i < s.length(); i++) {
			if (s[i] != s[i - 1]) {
				cout << "YES" << endl;
				return;
			}
		}
		// odd
		cout << "NO" << endl;
	} else {
		// even
		for (int i = 1; i < mid; i++) {
			if (s[i] != s[i - 1]) {
				cout << "YES" << endl;
				return;
			}
		}
		for (int i = mid + 1; i < mid; i++) {
			if (s[i] != s[i - 1]) {
				cout << "YES" << endl;
				return;
			}
		}
		cout << "NO" << endl;
	}

}

int32_t main() {
	w(x) {
		coderev();
	}
}

