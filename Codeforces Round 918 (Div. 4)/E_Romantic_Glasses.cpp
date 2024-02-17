#include <bits/stdc++.h>
using namespace std;

    
#define int            long long int
typedef pair<int, int> pairs;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &i: v)
        cin >> i;

    bool ans = false;

    
    set<pairs> s;
    
    s.insert({0,0});

    int o = 0, e = 0;
    for (int i = 0; i < n;i++){
        if(i%2==0){
            o += v[i];
        }
        else {
            e += v[i];
        }

        int temp = min(o, e);
        o -= temp;
        e -= temp;
        if (s.find({o, e}) != s.end())
        {
            ans = true;
            break;
        }
        s.insert({o,e});
    }
    if(ans)
        cout << "YES\n";
    else
        cout << "NO\n";
}
 
int32_t main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // std::cout<<std::fixed<<std::setprecision(0);

    int t=1;
    std::cin>>t;
    while(t--) solve();
}