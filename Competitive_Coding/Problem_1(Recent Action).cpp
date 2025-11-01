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

	// Main code


	int n;
	string s;
	cin >> n >> s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	int leng = s.length();
	cout << s;

	char ca[leng];
	for (int i = 0; i < leng; i++) {
		ca[i] = s[i];
	}
	int index = 0;
	for (int i = 0; i < leng; i++) {
		int j;
		for (j = 0; j < i; j++) {
			if (ca[i] == ca[j]) {
				break;
			}
		}
		if (j == i) {
			ca[index++] = ca[i];
		}
	}
	cout << "HI";
	for (auto l : ca) {
		cout << " Hi";
		cout << l << " ";
	}



}


int32_t main() {
	// cout << "Hi"
	w(x) {
		coderev();
	}
}

