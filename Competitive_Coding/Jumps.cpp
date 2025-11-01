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

int k = 3;

vector<vector<int>> multiplyTwoMatrix(vector<vector<int>> a, vector<vector<int>> b) {
	vector<vector<int>> result(k, vector<int>(k));
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++) {
			for (int x = 0; x < k; x++) {
				result[i][j] += a[i][x] * b[x][j];
			}
		}
	}
	return result;
}
vector<vector<int>> power(vector<vector<int>> a, int p) {
	// Base case if a^1 = a
	// cout << "Hi";
	if (p == 1) {
		return a;
	}

	// Check if it is power is odd then we do = a^n = a*a^n-1
	// If the power is even then we do a^n = a^n/2 * a^n/2

	if (p & 1) {
		return multiplyTwoMatrix(a, power(a, p - 1)); // Multiply two matrix
	}

	vector<vector<int>> r = power(a, p / 2);
	return multiplyTwoMatrix(r, r);
}
void coderev()
{
	// cout << "Hi";
	int n;
	cin >> n;
	// F(n) = F(n-1) + F(n-2) + F(n-3) + ...F(n-k) // Recurance relation
	// Find F(n) ?
	// K term = 1,2,3
	// Coffiencents are => 1,1,1
	// Tranformation matrix k x k
	vector<int> f1;
	for (int i = 1; i <= k; i++) {
		f1.push_back(i);
	}
	vector<vector<int>> trans(k, vector<int>(k));

	for (int i = 0; i < k - 1; i++) {
		for (int j = 0; j < k; j++) {
			if ((i - j) == -1) {
				trans[i][j] = 1;
			}
		}
	}
	for (int i = 0; i < k; i++) {
		trans[k - 1][i] = 1;
	}
	// for (int i = 0; i < trans.size(); i++) {
	// 	for (int j = 0; j < trans.size(); j++) {
	// 		cout << trans[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	// // T^n
	vector<vector<int>> tn = power(trans, n - 1);
	// for (int i = 0; i < tn.size(); i++) {
	// 	for (int j = 0; j < tn.size(); j++) {
	// 		cout << tn[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	int res = 0;
	for (int i = 0; i < k; i++) {
		res += tn[0][i] * f1[i];
	}
	cout << res << endl;
}

int32_t main() {
	// cout << "HI";
	// w(x) {
	// 	coderev();
	// }
	coderev();
}

