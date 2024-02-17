#include <bits/stdc++.h>
using namespace std;
    
//#define int            long long int

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(2));

    for (int i = 0; i < n;i++){
        cin >> v[i][0] >> v[i][1];
    }

    sort(v.begin(), v.end());
    //vector<vector<int>> pr(n, vector<int>(2));
    //pr[0][0] = v[0][0], pr[0][1] = v[0][1];

    int ans = 0;
    //l = v[0][0], r = [0][1];
    set<int> s;
    s.insert(v[0][1]);
    for (int i = 1; i < n;i++){
        s.insert(v[i][1]);
        for(int i: s){
            cout << i << " ";
        }
        
        auto lb = lower_bound(s.begin(), s.end(), v[i][1]);
        auto rb = upper_bound(s.begin(), s.end(), v[i][1]);

        if(rb == s.end())
            ans += 0, cout << " 0";
        else{
            ans += *rb - *lb, cout << " " << ( *rb);
        }
        // policy based stl karle
        cout << "\n";
    }
    //cout << ans << "\n";
    cout << "\n";
}
 
int32_t main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // std::cout<<std::fixed<<std::setprecision(0);

    int t=1;
    std::cin>>t;
    while(t--) solve();
}