#include <bits/stdc++.h>
    
#define int            long long int
 
void solve(){
    int x, y;
    std::cin>>x>>y;
    int screens = (y+1)/2;
    std::cout<<std::max((y+1)/2, (x + 4*y + 14)/15) << "\n";
}
 
int32_t main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // std::cout<<std::fixed<<std::setprecision(0);

    int t=1;
    std::cin>>t;
    while(t--) solve();
}