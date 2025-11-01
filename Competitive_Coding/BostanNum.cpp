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


int sumOfPrimeFac(int n) {
	int sum = 0;
	// cout << "HI";
	while (n % 2 == 0)
	{
		sum += 2;
		n = n / 2;
	}
	// cout << sqrt(22) << endl;

	for (int i = 3; i <= sqrt(n); i += 2) {
		while ((n % i) == 0) {
			// cout << i << endl;
			int temp = i;
			if (temp > 9) {
				while (temp > 0) {
					sum += temp % 10;
					temp /= 10;
				}
			} else {
				sum += i;
			}
			n = n / i;

		}
		// cout << n << " " << i << endl;
	}
	if (n > 2) {
		if (n > 9) {
			while (n > 0) {
				sum += n % 10;
				n /= 10;
			}
		} else {
			sum += n;
		}
	}
	return sum;
}

void coderev()
{
	int n;
	cin >>  n;
	int sum1 = 0;
	int sum2 = sumOfPrimeFac(n);
	// cout << sum2 << endl;
	int pos = 0;
	while (n > 0) {
		sum1 += n % 10;
		n /= 10;
	}
	// cout << sum1 << " " << sum2 << endl;
	if (sum1 == sum2) {
		cout << 1 << endl;
	} else {
		cout << 0 << endl;
	}

}




int32_t main() {
	// w(x) {
	coderev();
	// }
}

