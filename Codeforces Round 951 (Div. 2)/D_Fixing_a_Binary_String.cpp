#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

/////////////////////////////////////////////////////////////////
//				सुखदुःखे समे कृत्वा लाभालाभौ जयाजयौ।।				//
//				ततो युद्धाय युज्यस्व नैवं पापमवाप्स्यसि॥  				//
//////////////////////////////////////////////////////////////

template <typename T, class C = std::less<T>>
using ordered_set = tree<T, null_type, C, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T, class C = std::less_equal<T>>
using ordered_multiset = tree<T, null_type, C, rb_tree_tag, tree_order_statistics_node_update>;

#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             std::set <int>
#define vi             std::vector <int>
#define pii            std::pair <int, int>
#define vpi            std::vector <pii>
#define vpp            std::vector <pair<int, pii>>
#define umii           std::unordered_map <string, int>
#define mii            std::map <int, int>
#define mpi            std::map <pii, int>
#define spi            std::set <pii>
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        std::priority_queue <int>
#define que_min        std::priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)

int nxt() {
    int x;
    std::cin >> x;
    return x;
}

void solve(){
    int n = nxt(), k = nxt();

    string s;
    std::cin >> s;

    int i = n - 1;
    while(i >= 0 && s[i] == s[n-1])
        i--;

    if(i==n-1 && k==n){
        cout<<0<<endl;
        return;
    }
    int j = i;
    while(j >= 0){
        int d = i - j;
        int x = d / k;
        if(x % 2 == 0 && (s[j] - '0') == (s[n-1] - '0')^1)
            j--;
        else if(x % 2 == 1 && (s[j] - '0') == (s[n-1] - '0'))
            j--;
        else
            break;
    }
    if(j == -1 && i==n-1-k){
        cout<<n<<endl;
        return;
    }
    // if(j==-1){
    //     cout<<-1<<endl;
    //     return;
    // }
    while((i-j)%k != 0)
        j++;
    string s1 = s.substr(0, j+1), s2 = s.substr(j+1);
    reverse(all(s1));
    s2 += s1;
    rep(h, 0, n){
        if(s2[h] != s2[h-(h%k)]){
            cout<<-1<<endl;
            //cout << h << ' ' << i << ' ' << j << ' ' << s2 << endl;
            return;
        }
        if(h>=k && s2[h] == s2[h-k]){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<j+1<<endl;
}

int32_t main() {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // std::cout<<std::fixed<<std::setprecision(0);

    int t=1;
    std::cin>>t;
    while(t--) solve();
}