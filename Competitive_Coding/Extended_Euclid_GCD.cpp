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

int x, y, GCD;


// a % b
// a = (10^0*q + 10^1*w + 10^2*e +...)
int euclid_gcd(int a, int b) {
	return (b == 0) ? a : euclid_gcd(b, a % b);
}
void extented_euclid_gcd(int a, int b) {
	// Ax + By = GCD(A,B)
	// Base case

	if (b == 0) {
		x = 1;
		y = 0;
		GCD = a;
		return;
	}
	extented_euclid_gcd(b, a % b);
	int cx = y;
	int cy = (x - (a / b) * y);

	x = cx;
	y = cy;

}

// We find this only when the gcd(a,m) == 1
// This is the condition of getting the multiplicative modulo inverse

int inverseModulo(int a, int m) {
	if (euclid_gcd(a, m) != 1) {
		return -1;
	}

	extented_euclid_gcd(a, m);
	return (x + m) % m;
}


int32_t main() {
	cout << euclid_gcd(2, 3) << endl;
}