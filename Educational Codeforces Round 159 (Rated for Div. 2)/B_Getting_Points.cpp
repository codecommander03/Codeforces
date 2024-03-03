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
    int n, P, l, t;
    std::cin>>n>>P>>l>>t;
    int ll = 1, rr = n;
    while(ll<=rr){
        int mid = (ll + rr) / 2;
        int weeks = (n + 6) / 7;
        int score = mid * l;
        score += std::min(weeks, 2 * mid) * t;
        //std::cout << mid << "->" << mid * l << ' ' << std::min(weeks, 2 * mid) * t << '\n';
        if(score>=P){
            rr = mid-1;
        }
        else ll = mid + 1;
    }
    std::cout<<n - ll<<'\n';
}
 
int32_t main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // std::cout<<std::fixed<<std::setprecision(0);

    int t=1;
    std::cin>>t;
    while(t--) solve();
}