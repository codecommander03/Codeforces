#include <bits/stdc++.h>
    
#define int            long long int
 
void solve(){
    int n;
    std::string s,t;
    std::cin>>n>>s;
    std::map<char,char> m;
    for(char c: s) m[c] = c;
    for(auto i: m) t += i.first;
    int ind = t.size()-1;
    for(auto &[i,j]: m){
        j = t[ind--];
    }
    for(char &c: s) c = m[c];
    std::cout<<s<<"\n";
}
 
int32_t main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // std::cout<<std::fixed<<std::setprecision(0);

    int t=1;
    std::cin>>t;
    while(t--) solve();
}