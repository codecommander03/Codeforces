// #include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>
#include <climits>
#include <cmath>
#include <iterator>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>
#include <stack>
#include <queue>
#include <iomanip>
#include <numeric>

#define int long long


////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//										सुखदुःखे समे कृत्वा लाभालाभौ जयाजयौ।										//
//										ततो युद्धाय युज्यस्व नैवं पापमवाप्स्यसि॥  								   		 //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void solve()
{
	int n,l,r, res = 0;
	cin >> n;
	vector<pair<int, int>> v(n);
	vector<int> v1(n), v2(n);
	for (int i = 0; i < n; i++)
	{
		cin >> l >> r;
		v[i] = {l, r};
	}
	std::sort(begin(v), end(v),[&](const pair<int, int> &a, const pair<int, int> &b){
		if(a.second == b.second)
			return a.first < b.first;
		else
			return a.second < b.second;
	});

	for (int i = 0; i < n;i++){
		v1[i] = v[i].first;
		v2[i] = v[i].second;
	}

	for (int i = 0; i < n; i++)
	{
		int x = upper_bound(begin(v1)+i, end(v1), v2[i]) - (begin(v1)) - i - 1;
		res += x;
	}
	cout << res << "\n";
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	// cout<<fixed<<setprecision(0);

	int t = 1;
	// cin >> t;
	while (t--)
		solve();
}