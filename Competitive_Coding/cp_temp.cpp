#include <bits/stdc++.h>
// #include <ext/pb_ds/detail/resize_policy/hash_standard_resize_policy_imp.hpp>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

using namespace std;

#define ff first
#define ss second
// #define int long long int
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



// int k;
// log(n) time
// a^n
// int fast_exp(int a, int n) {
// 	if (n == 1) {
// 		return a;
// 	}
// 	int sans = fast_exp(a, n / 2);
// 	if (n & 1) {
// 		return a * sans * sans;
// 	} else {
// 		return sans * sans;
// 	}
// }

void primeSeive(int *p) {
	// cout << &p << endl;
	for (int i = 3; i <= 100000; i++) {
		// cout << "Hi" << endl;
		p[i] = 1;
	}

	for (long long int i = 3; i <= 100000; i += 2) {
		if (p[i] == 1) {
			for (long long int j = i * i; j <= 100000; j = j + i) {
				// cout << j << endl;
				p[j] = 0;
			}
		}
	}
	p[2] = 1;
	p[1] = p[0] = 0;

}
// // Used to find the nth term of a series in O(k^3 log(n))
// //
// int matrix_expo(int n, int matrixk, vector<int> kelments, vector<int> coff) {
// 	k = matrixk;
// 	if (n == 0) {
// 		return 0;
// 	}
// 	if (n <= k) {
// 		return kelments[n - 1];
// 	}

// 	// Formula = T^n-1*F1
// 	vector<int> f1(k + 1);
// 	for (int i = 1; i <= k; i++) {
// 		f1[i] = kelments[i - 1];
// 	}

// 	// Make a tranformation matrix

// 	vector<vector<int>> T(k + 1, vector<int>(k + 1));
// 	for (int i = 1; i <= k; i++) {
// 		for (int j = 1; j <= k; j++) {
// 			if (i < k) {
// 				if (j == i + 1) {
// 					T[i][j] = 1;
// 				} else {
// 					T[i][j] = 0;
// 				}
// 			} else {
// 				T[i][j] = coff[k - j];
// 			}
// 		}
// 	}


// 	// Do T ^ n-1
// 	T = power(T, n - 1);
// 	int res = 0;
// 	for (int i = 1; i <= k; i++) {
// 		res = res + (T[1][i] * f1[i]);
// 	}
// 	return res;
// }

// vector<vector<int>> power(vector<vector<int>> a, int p) {
// 	// Base case if a^1 = a
// 	if (p == 1) {
// 		return a;
// 	}

// 	// Check if it is power is odd then we do = a^n = a*a^n-1
// 	// If the power is even then we do a^n = a^n/2 * a^n/2

// 	if (p & 1) {
// 		return multiplyTwoMatrix(a, power(a, p - 1)); // Multiply two matrix
// 	}

// 	vector<vector<int>> r = power(a, p / 2);
// 	return multiplyTwoMatrix(r, r);
// }

// vector<vector<int>> multiplyTwoMatrix(vector<vector<int>> a, vector<vector<int>> b) {
// 	vector<vector<int>> result(k + 1, vector<int>(k + 1));
// 	for (int i = 1; i <= k; i++) {
// 		for (int j = 1; j <= k; j++) {
// 			for (int x = 1; x <= k; x++) {
// 				result[i][j] = result[i][j] + a[i][x] * b[x][j];
// 			}
// 		}
// 	}
// 	return result;
// }

// void coderev()
// {


// }

int32_t main() {
	int n;
	cin >> n;
	// cout << "HI";
	int p[100000] = {0};
	primeSeive(p);
	// cout << &p << endl;

	for (int i = 0; i <= n; i++) {
		cout << p[i] << endl;
	}
	// w(x) {
	// 	coderev();
	// }
}

