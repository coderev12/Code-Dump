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


void print(unordered_map<int, int> p) {
	for (auto& pair : p) {
		cout << pair.first << " : " << pair.second << endl;
	}
}
bool willAdditionOverflow(int a, int b) {
	if (b > 0 && a > INT_MAX - b) return true;
	if (b < 0 && a < INT_MIN - b) return true;
	return false;
}

void coderev()
{
	int n;
	cin >> n;
	vector<int> s(n);

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	int modpref[n] = {0};
	if (s[0] < 0) {
		s[0] = ((s[0] % n) + n) % n;
	} else {
		s[0] %= n;
	}
	modpref[0] = s[0];

	for (int i = 1; i < n; i++) {
		if (s[i] < 0) {
			s[i] = ((s[i] % n) + n) % n;
		} else {
			s[i] %= n;
		}

		modpref[i] = modpref[i - 1] + s[i];
	}


	unordered_map<int, int> p;
	p[0] = 1;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int currMod = (modpref[i] + n) % n;
		// cout << currMod << " ";
		if (p.find(currMod) != p.end()) {
			//
			ans += p[currMod];
		}
		p[currMod]++;
	}
	// print(p);
	// cout << endl;
	cout << ans << endl;
}

int32_t main() {
	// w(x) {
	coderev();
	// }
}
