#include <bits/stdc++.h>
    
#define ll  long long

 

void solve(){
    int n;
    std::cin >> n;
    ll res = 1;
    while(n){
        int ld = n%10, temp=0;
        n /= 10;
        for (int i = 0; i <= ld;i++){
            for (int j = 0; j <= ld;j++){
                if(i+j<=ld)
                    temp++;
            }
        }
        res *= temp;
    }
    std::cout << res << "\n";
}

int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    std::cin >> t;
    while (t--)
        solve();
}