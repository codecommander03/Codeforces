#include <iostream>
#include <map>
void solve(){
    int n, x;
    long long ans = 0;
    std::cin >> n;
    std::map<int, int> m;
    while(n--){
        std::cin >> x;
        ans += ++m[x]-1;
    }

    ans += 1LL * m[1] * m[2];
    std::cout << ans << '\n';
}
 
int32_t main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // std::cout<<std::fixed<<std::setprecision(0);

    int t=1;
    std::cin>>t;
    while(t--) solve();
}