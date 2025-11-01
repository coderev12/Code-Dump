#include <bits/stdc++.h>
// #include <ext/pb_ds/detail/resize_policy/hash_standard_resize_policy_imp.hpp>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

using namespace std;

#define ff first
#define ss second
#define int long long int
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


// A number is Tprime if they have 3 positive divisors
// Square of a prime number is Tprime

#define LIMIT 1000000

int primep[LIMIT];

// void primeFlag() {
// 	primep[0] = primep[1] = 1;
// 	for (int i = 2; i * i <= LIMIT; i++) {
// 		for (int j = i * i; j <= LIMIT; j += i) {
// 			primep[j] = 1;
// 		}
// 	}
// }
// bool isPrime(int n) {
// 	for (int i = 2; i * i <= n; i++) {
// 		if (n % i == 0) {
// 			return false;
// 		}
// 	}
// 	return true;
// }


set<int> PrimeFactorization(int n) {
	set<int> s;
	int t = n;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			if (n / i == i) {
				s.insert(i);
			} else {
				s.insert(i);
				s.insert(n / i);
			}
		}
	}
	s.insert(n);
	return s;
}
// void coderev()
// {



// }


// void solve() {
// 	int n, q;

// 	cin >> n;
// 	for (int i = 0; i < n; i++) {

// 	}
// }

int32_t main() {
	// w(x) {
	// 	coderev();
	// }
	// solve();

	int n, q;
	cin >> n;
	int cnt[100000] = {0};
	int sum[100000] = {0};

	// set<int> s;
	// for (int i = 0; i < n; i++) {
	// 	int x;
	// 	cin >> x;
	// 	set<int> v = PrimeFactorization(x);
	// 	s.insert(v.begin(), v.end());
	// }

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		cnt[x]++;
	}
	sum[0] = 0;
	sum[1] = n;
	for (int i = 2; i < 100000; i++) {
		for (int j = i; j < 100000; j += i) {
			sum[i] += cnt[j];
		}
	}
	// for (auto i : s) {
	// 	cout << i << endl;
	// }

	cin >> q;

	for (int i = 0; i < q; i++) {
		int m;
		cin >> m;
		cout << sum[m] << endl;
	}
}

