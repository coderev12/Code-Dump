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

int euclid_gcd(int a, int b) {
	return (b == 0) ? a : euclid_gcd(b, a % b);
}

int first_coprime_num(int n) {
	for (int i = 2; i <= n; i++) {
		if (euclid_gcd(n, i) == 1) {
			return i;
		}
	}

	return -1;
}

void coderev()
{
	int n;
	cin >> n;
	vector<vector<int>> v(2, vector<int>(n));

	int max = 2 * n;
	v[0][0] = max;
	v[1][n - 1] = max - 1;

	int f = 1, b = max - 2;

	for (int i = 0; i < n - 1; i++) {
		if (i % 2 == 1) {
			v[1][i] = b - 1;
			v[0][i + 1] = b;
			b = b - 2;
		} else {
			v[1][i] = f;
			v[0][i + 1] = f + 1;
			f = f + 2;
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < n; j++) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}

int32_t main() {
	w(x) {
		coderev();
	}
}

