#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	vector<int>v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	set<int> s;
	int i = 0;
	int j = 0;
	int ans = 0;
	while (i < v.size()) {
		while (j < v.size() && s.find(v[j]) == s.end()) {
			// cout << "hi"<<endl;
			s.insert(v[j]);
			j++;
		}
		ans += (abs(j - i) * ((abs(j - i) + 1))) / 2;
		s.erase(v[i]);
		i++;

	}
	cout << ans;
	return 0;
}