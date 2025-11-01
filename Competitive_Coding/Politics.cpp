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



void coderev()
{
	int n, k;
	cin >> n >> k;
	char a[n][k];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			char c;
			cin >> c;
			a[i][j] = c;
		}
	}
	set<int> s;
	int maxmem = n;
	int eliminated = 0;
	for (int i = 0; i < k; i++) {
		char main = a[0][i];
		for (int j = 1; j < n; j++) {
			if (main == '+') {
				if (a[j][i] == '-') {
					if (s.find(j) == s.end()) {
						maxmem--;
						s.insert(j);
					}
				}
			} else {
				if (a[j][i] == '+') {
					if (s.find(j) == s.end()) {
						maxmem--;
						s.insert(j);
					}
				}
			}
		}
	}
	cout << maxmem << endl;


}

int32_t main() {
	w(x) {
		coderev();
	}
}

