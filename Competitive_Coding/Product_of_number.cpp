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

void print(vector <pair<int, int>> v) {
	for (auto i : v) {
		cout << i.first << " " << i.second << endl;
	}
}

int log_a_to_base_b(int a, int b)
{
	return log2(a) / log2(b);
}

void coderev()
{
	int n;
	cin >> n;
	vector<pair<int, int>> factor;
	int temp = n;
	for (int i = 2; (i * i) <= temp; i++) {
		int count = 0;
		while ((temp % i) == 0) {
			count++;
			temp = temp / i;
		}
		if (n % i == 0) {
			factor.push_back({i, count});
		}

		count = 0;
		// cout << n << endl;
	}
	if (temp > 1) {
		factor.push_back({temp, 1});
	}
	print(factor);
	if (factor.size() == 1) {
		if (factor[0].second >= 6) {
			cout << "YES" << endl;
			cout << factor[0].first << " " << factor[0].first * factor[0].first << " " << n / (factor[0].first * factor[0].first) << endl;
		} else {
			cout << "NO" << endl;
		}
	} else if (factor.size() == 2) {
		int third = n / (factor[0].first * factor[1].first);
		if (third != factor[0].first && third != factor[1].first) {
			cout << "YES" << endl;
			cout << factor[0].first << " " << factor[1].first << " " << third << endl;
		} else {
			cout << "NO" << endl;
		}

	} else {
		cout << "YES" << endl;
		cout << factor
	}


}

int32_t main() {
	w(x) {
		coderev();
	}
}

