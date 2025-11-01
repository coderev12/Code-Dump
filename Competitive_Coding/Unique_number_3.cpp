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

	int x, y;
	cin >> x >> y;
	int num = x ^ y;
	int last_set_bit_pos = 0;

	while (num) {
		last_set_bit_pos++;
		num = num >>  1;
	}

	cout << (1 << last_set_bit_pos) - 1 << endl;
	// while(y > 0){
	// 	if(y & 1 == 0){
	// 		// 0 => last_bit
	// 		while
	// 		y >> 1;
	// 	}else{
	// 		// 1 => last_bit

	// 	}
	// }


}

int32_t main() {

	// w(x) {
	// 	coderev();
	// }
	coderev();
}

