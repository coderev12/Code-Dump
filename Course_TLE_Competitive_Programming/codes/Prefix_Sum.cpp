#include <bits/stdc++.h>
// #include <ext/pb_ds/detail/resize_policy/hash_standard_resize_policy_imp.hpp>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

#include <bits/stdc++.h>
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
	// 1D Prefix Sum

	int x;
	cin >> x;

	vi a(x);
	for (auto &i : a) cin >> i;

	vi pre(x);

	pre[0] = a[0];
	for (int i = 1; i < x; i++) {
		pre[i] = pre[i - 1] + a[i];
	}

	for (int i = 0; i < x; i++) {
		cout << pre[i] << " ";
	}


	// 2D Prefix Sum


	cout << endl;
	cout << endl;
	int n, m;
	cin >> n >> m;
	vector<vector<int>> tdarr(n, vector<int>(m));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> tdarr[i][j];
		}
	}

	vector<vector<int>> prefi2(n, vector<int>(m));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			prefi2[i][j] = tdarr[i][j];
			if (i > 0) {
				prefi2[i][j] += prefi2[i - 1][j];
			}

			if (j > 0) {
				prefi2[i][j] += prefi2[i][j - 1];
			}
			if (i > 0 && j > 0) {
				prefi2[i][j] -= prefi2[i - 1][j - 1];
			}

		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << prefi2[i][j] << " ";
		}
		cout << endl;
	}
}


int32_t main() {
	w(x) {
		coderev();
	}
}

