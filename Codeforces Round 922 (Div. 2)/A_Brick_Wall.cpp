#include <iostream>

void solve(){
    int m, n;
    std::cin>>m>>n;
    int x = (n - (n % 2)) / 2;
    std::cout << m * x << "\n";
}
 
int32_t main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t=1;
    std::cin>>t;
    while(t--) solve();
}
