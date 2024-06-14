#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

//					सुखदुःखे समे कृत्वा लाभालाभौ जयाजयौ॥
//					ततो युद्धाय युज्यस्व नैवं पापमवाप्स्यसि॥

template <typename T, class C = std::less<T>>
using ordered_set = tree<T, null_type, C, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T, class C = std::less_equal<T>>
using ordered_multiset = tree<T, null_type, C, rb_tree_tag, tree_order_statistics_node_update>;

struct custom_hash {
static uint64_t splitmix64(uint64_t x) {
// http://xorshift.di.unimi.it/splitmix64.c
x += 0x9e3779b97f4a7c15;
x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
return x ^ (x >> 31);
}

size_t operator()(uint64_t x) const {
static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
return splitmix64(x + FIXED_RANDOM);
}
};

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
#define umii           std::unordered_map <int, int, custom_hash>
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

#define set_bits __builtin_popcountll
#define lead_zero __builtin_clzll
#define trail_zero __builtin_ctzll

int nxt() {
    int x;
    std::cin >> x;
    return x;
}

int pow(int base, int exp) {
    int res = 1;
    while (exp > 0) {
        if (exp & 1)
            res = res * base;
        base = base * base;
        exp /= 2;
    }
    return res;
}

int pow(int base, int exp, int mod) {
    int res = 1;
    while (exp > 0) {
        if (exp & 1)
            res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

const int mod = 1000000007;

int dfs(vector<vector<char>> &v, vector<vi> &order, int i, int j, int &x){
    int n = v.size(), m = v[0].size();
    if(i<0 || j<0 || i>=n || j>=m || v[i][j] == '.' || order[i][j] != 0)
        return 0;

    order[i][j] = x;
    int a = dfs(v, order, i+1, j, x);
    int b = dfs(v, order, i-1, j, x);
    int c = dfs(v, order, i, j+1, x);
    int d = dfs(v, order, i, j-1, x);
    return a+b+c+d+1;
}

void solve(){
    int n = nxt(), m = nxt(), res = 0;

    vector<vector<char>> v(n, vector<char>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>v[i][j];
        }
    }

    if(m==1 || n==1){
        cout << max(m, n) << endl;
        return;
    }

    vector<vi> order(n, vi(m, 0));
    map<int,int> mp; // size of every component

    int x = 1;

    rep(i, 0, n){
        rep(j, 0, m){
            if(v[i][j] == '.') {
                order[i][j] = 0;
                // cout << 0<< " ";
            } else{
                if(order[i][j] != 0){
                    // cout << order[i][j] << " ";
                    continue;
                }
                int val = dfs(v, order, i, j, x);
                if(val){
                    mp[x] = val;
                    x++;
                }
                // cout << order[i][j] << " ";
            }
        }
        // cout << endl;
    }

    rep(i, 0, n){
        vector<bool> vis(x, false);
        int curr = 0;
        rep(j, 0, m){
            if(i>0 && order[i-1][j] > 0){
                int num = order[i-1][j];
                if(vis[num] == false){
                    vis[num] = true;
                    curr += mp[num];
                }
            }
            if(i<n-1 && order[i+1][j] > 0){
                int num = order[i+1][j];
                if(vis[num] == false){
                    vis[num] = true;
                    curr += mp[num];
                }
            }
            if(order[i][j]==0)
                curr++;
            else if(vis[order[i][j]] == false){
                vis[order[i][j]] = true;
                curr += mp[order[i][j]];
            }
        }
        res = max(res, curr);
    }

    rep(j, 0, m){
        vector<bool> vis(x, false);
        int curr = 0;
        rep(i, 0, n){
            if(j>0 && order[i][j-1] > 0){
                int num = order[i][j-1];
                if(vis[num] == false){
                    vis[num] = true;
                    curr += mp[num];
                }
            }
            if(j<m-1 && order[i][j+1] > 0){
                int num = order[i][j+1];
                if(vis[num] == false){
                    vis[num] = true;
                    curr += mp[num];
                }
            }
            if(order[i][j]==0)
                curr++;
            else if(vis[order[i][j]] == false){
                vis[order[i][j]] = true;
                curr += mp[order[i][j]];
            }
        }
        res = max(res, curr);
    }
    
    cout << res << endl;
}

int32_t main() {
//#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // std::cout<<std::fixed<<std::setprecision(0);

    int t=1;
    std::cin>>t;
    while(t--) solve();
}