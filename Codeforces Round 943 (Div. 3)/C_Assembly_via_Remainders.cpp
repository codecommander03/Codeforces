// #include <bits/stdc++.h>
// using namespace std;
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
    
#define int            long long int
    
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//										सुखदुःखे समे कृत्वा लाभालाभौ जयाजयौ।										//
//										ततो युद्धाय युज्यस्व नैवं पापमवाप्स्यसि॥  								   		 //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void solve(){
    int n;
    std::cin>>n;

    std::vector<int> x(n-1);
    for(int i=0;i<n-1;i++) std::cin>>x[i];

    std::vector<int> a(n);
    a[0] = x[0]+1;
    a[1] = a[0] + x[0];
    for(int i=2;i<n;i++){
        while(x[i-1]>=a[i-1]) a[i-1] += a[i-2];
        a[i] = x[i-1]+a[i-1];
    }
    for(int i: a) std::cout<<i<<" ";
    std::cout<<"\n";
}
 
int32_t main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // std::cout<<std::fixed<<std::setprecision(0);

    int t=1;
    std::cin>>t;
    while(t--) solve();
}