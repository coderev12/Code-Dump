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


int calformular(int x, int y) {
	return ((x + y) * (x + y));
}

void coderev()
{
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int c0 = 0 , c1 = 0;
	int x[n];
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') c0++;
		if (s[i] == '1') c1++;
	}
	int ans = (c0 / 2) + (c1 / 2);
	if (k >= 0 && k <= ans && k <= (n / 2)) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

}



int32_t main() {
	w(x) {
		coderev();
	}
}