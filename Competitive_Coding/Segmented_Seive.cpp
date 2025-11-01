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



vector<int> prime;
vector<int> primeSeive(int n) {
	vector<int> primes;
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int i = 2; i <= n; i++) {
		if (prime[i] == true) {
			primes.push_back(i);
			for (int j = i; j <= n; j += i) {
				prime[j] = false;
			}
		}

	}

	return primes;


}

int solve() {
	int m, n;
	cin >> m >> n;

	vector<int> seg(n - m + 1, 0);
	// cout << seg << endl;
	for (auto x : prime) {
		// cout << x << endl;
		if (x * x > n) {
			break;
		}
		int start = (m / x) * x;
		if (x >= m and x <= n) {
			start = x * 2;
		}
		for (int i = start; i <= n; i += x) {
			seg[i - m] = 1;
		}
	}

	for (int i = m; i <= n; i++) {
		if (seg[i - m] == 0 && i != 1) {
			cout << i << endl;
		}
	}
	cout << endl;
	return 0;


}
int32_t main() {
	prime = primeSeive(1000000);
	w(x) {
		solve();
	}
}

