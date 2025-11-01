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

// The Berland State University is hosting a ballroom dance in celebration of its 100500-th anniversary! n boys and m girls are already busy rehearsing waltz, minuet, polonaise and quadrille moves.

// We know that several boy&girl pairs are going to be invited to the ball. However, the partners' dancing skill in each pair must differ by at most one.

// For each boy, we know his dancing skills.
// Similarly, for each girl we know her dancing skills
//  Write a code that can determine the largest possible number of pairs that can be formed from n boys and m girls.


// 4
// 1 4 6 2
// 5
// 5 1 5 7 9

// 3
//
void coderev()
{
	int n, m;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cin >> m;
	int b[m];

	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}


	sort(a, a + n);
	sort(b, b + m);

	int i = 0;
	int j = 0;
	int ans = 0;

	while (i < n && j < m) {
		// cout << i << " " << j << " " << abs(a[i] - b[j]) << endl;
		if (abs(a[i] - b[j]) <= 1) {
			ans++;
			i++;
			j++;
		} else {
			if (a[i] > b[j]) {
				j++;
			} else {
				i++;
			}
		}

	}
	cout << ans << endl;



}

int32_t main() {
	// w(x) {
	coderev();
	// }
}

