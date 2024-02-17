#include <iostream>
    
#define int            long long int

void solve(){
    int x, n;
    std::cin>>x>>n;
    if(n==1){
        std::cout<<x<<"\n";
        return;
    }
    int ans = 1;

    for (int i = 2; i*i <= x;i++){
        if(x % i == 0){
            if(n <= x/i)
                ans = std::max(ans, i);
            if(n <= i)
                ans = std::max(ans, x/i);
        }
    }
    std::cout<<ans<<"\n";
}
 
int32_t main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t=1;
    std::cin>>t;
    while(t--) solve();
}