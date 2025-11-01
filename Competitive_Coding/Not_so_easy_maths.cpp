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

// int smallestDivisor(int n) {
// 	if (n % 2 == 0) {
// 		return 2;
// 	}

// 	for (int i = 3; i * i <= n; i++) {
// 		if (n % i == 0) {
// 			return i;
// 		}
// 	}
// 	return n;
// }

void coderev()
{
	int n, m;
	cin >> n >> m;

	// int f;
	if (n % 2 == 0) {
		n += 2;
		int num = m - n;
		if (n > m) {
			cout << 1 << endl;
			return;
		}
		// cout << m;
		cout << (((num / 2) + (num % 2)) + 1) << endl;

	} else if (n % 3 == 0) {
		n += 3;
		int num = m - n;
		if (n > m) {
			cout << 1 << endl;
			return;
		}
		// cout << m;
		cout << (((num / 2) + (num % 2)) + 1) << endl;

	} else {
		n += n;
		int num = m - n;
		if (n > m) {
			cout << 1 << endl;
			return;
		}
		// cout << m;
		cout << (((num / 2) + (num % 2)) + 1) << endl;

	}
}

int32_t main() {
	w(x) {
		coderev();
	}

}
