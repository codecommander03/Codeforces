#include <bits/stdc++.h>
    
#define int            long long int
 
void solve(){
    int n, res = 0;
    std::cin>>n;
    std::vector<int> v(n);
    for(int i=0;i<n;i++) std::cin>>v[i];

    std::map<std::pair<int,int>,int> m12,m23,m13;
    std::map<std::vector<int>,int> m;

    for(int i=0;i<n-2;i++){
        int a = v[i], b = v[i+1], c = v[i+2];
        res += m12[{a,b}]++;
        res += m23[{b,c}]++;
        res += m13[{a,c}]++;

        res -= 3 * m[{a,b,c}]++;
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