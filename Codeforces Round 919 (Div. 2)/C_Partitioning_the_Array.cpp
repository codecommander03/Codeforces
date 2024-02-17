#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for(int i = 0; i < n; ++i){
        std::cin >> v[i];
    }
    int ans = 0;
    for (int i = 1; i <= n;i++){
        if(n%i==0){
            int curr = 0;
            for (int j = i; j < n; j++)
            {
                curr = std::__gcd(curr, std::abs(v[j] - v[j - i]));
            }
            ans += (curr != 1);
        }
    }
    std::cout << ans << '\n';
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t=1;
    std::cin>>t;
    while(t--) solve();
    return 0;
}