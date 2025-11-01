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


void print(int v[], int n) {
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

void coderev()
{
	int n;
	cin >> n;
	vector<int> a;
	int v[n];
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a.push_back(x);
	}
	int last_odd = -1;
	int last_even = -1;
	int count_of_even = 0;
	int count_of_odd = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			count_of_even++;
			last_even = i;
		} else {
			count_of_odd++;
			last_odd = i;
		}
	}

	if (count_of_odd > count_of_even) {
		cout << last_even + 1 << endl;
	} else {
		cout << last_odd + 1 << endl;
	}

}

int32_t main() {
	// w(x) {
	coderev();
	// }
}

