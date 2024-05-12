#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <unordered_set>
#include <set>
    
#define int            long long int

void solve(){
    char c;
    int q, l, r;
    std::cin>>q;
    std::multiset<int> s, e;
    while(q--){
        std::cin>>c>>l>>r;
        if(c=='+'){
            s.insert(l);
            e.insert(r);
        }
        else{
            s.erase(s.find(l));
            e.erase(e.find(r));
        }
        std::cout<<(s.size() && *s.rbegin()>*e.begin()?"YES":"NO")<<'\n';
    }
}
 
int32_t main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // std::cout<<std::fixed<<std::setprecision(0);

    int t=1;
    // std::cin>>t;
    while(t--) solve();
}