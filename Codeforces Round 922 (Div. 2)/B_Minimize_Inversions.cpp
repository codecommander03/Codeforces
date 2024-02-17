#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> v(n, std::vector<int>(3));
    for(int i = 0; i < n; ++i){
        std::cin >> v[i][1];
    }
    for(int i = 0; i < n; ++i){
        std::cin >> v[i][2];
        v[i][0] += v[i][1] + v[i][2];
    }
    std::sort(v.begin(), v.end());

    for (int i = 0; i < n;i++){
        std::cout << v[i][1] << " ";
    }
    std::cout << "\n";
    for (int i = 0; i < n;i++){
        std::cout << v[i][2] << " ";
    }
    std::cout << "\n";
}
 
int32_t main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t=1;
    std::cin>>t;
    while(t--) solve();
}