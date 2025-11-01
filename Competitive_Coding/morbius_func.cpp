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

const int n = 100005;
int a[n], prime_count[n], morbius[n];

void morbius_function() {
	for (int i = 1; i < n; i++) {
		a[i] = 1;
	}
	for (int i = 2; i < n; i++) {
		if (prime_count[i]) continue;
		for (int j = i; j < n; j += i) {
			prime_count[j]++;
			a[j] *= i;
		}
	}
	for (int i = 1; i < n; i++) {
		if (a[i] == i) {
			if (prime_count[i] % 2 == 1) {
				morbius[i] = -1;
			} else {
				morbius[i] = 1;
			}
		} else {
			morbius[i] = 0;
		}
	}

}

void solve()
{
	morbius_function();
	for (int i = 1; i <= 30; i++) {
		cout << morbius[i] << " ";
	}

}

int32_t main() {
	w(x) {
		solve();
	}
}

