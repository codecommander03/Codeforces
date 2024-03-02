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

 

void solve(){
    int n;
    std::cin>>n;
    std::vector<int> v(2*n);
    for(int i=0;i<2*n;i++) std::cin>>v[i];
    sort(begin(v),end(v));
    int res = 1e18;

    for(int i=0;i<2*n;i++){
        for(int j=i+1;j<2*n;j++){
            int prev=-1,val=0;
            bool turn = true;
            for(int k=0;k<2*n;k++){
                if(k==i || k==j) continue;
                if(turn){
                    turn = false;
                    prev = v[k];
                }
                else{
                    turn = true;
                    val += v[k]-prev;
                }
            }
            res = std::min(res,val);
        }
    }
    std::cout<<res<<"\n";
}
 
int32_t main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // std::cout<<std::fixed<<std::setprecision(0);

    int t=1;
    //std::cin>>t;
    while(t--) solve();
}