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

vector<pair<int, int>> primeFactorizationSeive(int n) {
	vector<pair<int, int>> primefactors;
	int x = n;
	for (int i = 2; i <= sqrt(n); i++) {
		int power = 0;
		if ((x % i) == 0) {
			while (x % i == 0) {
				power++;
				x /= i;
			}
			primefactors.push_back(make_pair(i, power));
		}
	}
	if (x != 1) {
		primefactors.push_back(make_pair(x, 1));
	}
}


void coderev()
{
	int n;
	cin >> n;
	vi v(n);

	vector<pair<int, int>> primef = primeFactorizationSeive(49);
	for (auto x : primef) {
		cout << x.first << " " << x.second << endl;
	}

	// for (int i = 0; i < n; i++) {
	// 	int x;
	// 	cin >> x;
	// 	v.push_back(x);
	// }

	// unordered_map<int, int> map;
	// for (int i = 0; i < v.size(); i++) {
	// 	vector<pair<int, int>> d = primeFactorizationSeive(v[i]);
	// 	for (auto x : d) {
	// 		cout << x.first << " " << x.second << endl;
	// 	}
	// 	for (int j = 0; j < d.size(); j++) {
	// 		map[d[j].first] += d[j].second;
	// 	}
	// }
	// // for (auto c : map) {
	// // 	cout << c.first << " " << c.second << endl;
	// // }



}


int32_t main() {
	w(x) {
		coderev();
	}
}

