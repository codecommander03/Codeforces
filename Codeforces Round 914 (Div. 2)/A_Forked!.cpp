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
    int a,b,kx,ky,qx,qy;
    std::cin>>a>>b>>kx>>ky>>qx>>qy;

    int res = 0;

    for(int i=-1;i<=1;i+=2){
        for(int j=-1;j<=1;j+=2){
            int x = kx+a*i, y = ky+b*j;
            if((abs(x-qx)==a && abs(y-qy)==b) || (abs(x-qx)==b && abs(y-qy)==a)) res++;
        }
    }

    if(a != b) {
        for(int i=-1;i<=1;i+=2){
            for(int j=-1;j<=1;j+=2){
                int x = kx+b*i, y = ky+a*j;
                if((abs(x-qx)==a && abs(y-qy)==b) || (abs(x-qx)==b && abs(y-qy)==a)) res++;
            }
        }
    }
    std::cout<<res<<"\n";
}
 
int32_t main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // std::cout<<std::fixed<<std::setprecision(0);

    int t=1;
    std::cin>>t;
    while(t--) solve();
}