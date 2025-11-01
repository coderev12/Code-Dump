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


vector<int> primeSeive(int *p, int n) {
	p[0] = p[1] = 0;
	p[2] = 1;
	for (int i = 3; i <= n; i += 2) {
		p[i] = 1;
	}
	for (int i = 3; i <= n; i += 2) {
		if (p[i]) {
			for (int j = i * i; j <= n; j += 2 * i) {
				p[j] = 0;
			}
		}
	}
	vector<int> prime;
	prime.push_back(2);
	for (int i = 3; i <= n; i += 2) {
		if (p[i] == 1) {
			prime.push_back(i);
		}
	}
	return prime;
}

vector<int> PrimeFactorizationOptimed(int n)
{
	vector<int> factors;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			factors.push_back(i);
			while (n % i == 0) {
				n = n / i;
			}
		}

	}
	if (n != 1) {
		factors.push_back(n);
	}
	return factors;
}
vector<int> PrimeFactorizationSeive(int n, vector<int> primes) {
	vector<int> factors;
	factors.clear();
	int i = 0;
	int p = primes[0];
	while (p * p <= n) {
		if (n % p == 0) {
			factors.push_back(p);
			while (n % p == 0) {
				n = n / p;
			}
		}
		i++;
		p = primes[i];
	}
	return factors;

}

int32_t main() {
	int p[100005] = {0};
	vector<int> prime = primeSeive(p, 100000);

	// w(x) {
	// coderev();
	// }
}

