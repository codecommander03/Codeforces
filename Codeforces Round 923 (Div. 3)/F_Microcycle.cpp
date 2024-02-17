#include <bits/stdc++.h>

#define int long long
#define pb emplace_back
#define mp make_pair
#define x first
#define y second
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()

typedef long double ld;
typedef long long ll;

using namespace std;

mt19937 rnd(time(nullptr));

const ll inf = 1e18;
const ll M = 998244353;
const ld pi = atan2(0, -1);
const ld eps = 1e-6;

struct dsu
{
    vector<int> p, lvl;

    dsu(int n)
    {
        p.resize(n);
        iota(p.begin(), p.end(), 0);
        lvl.assign(n, 0);
    }

    int find(int i)
    {
        if (p[i] == i)
            return i;
        return p[i] = find(p[i]);
    }

    bool merge(int a, int b)
    {
        a = find(a);
        b = find(b);
        if (a == b)
            return false;
        if (lvl[a] < lvl[b])
            swap(a, b);
        p[b] = a;
        if (lvl[a] == lvl[b])
            lvl[a]++;
        return true;
    }
};

bool found;
vector<int> ans, path;

void dfs(int v, int p, vector<vector<int>> &g, int f)
{
    path.push_back(v);
    if (v == f)
    {
        ans = path;
        found = true;
        return;
    }
    for (int u : g[v])
    {
        if (u != p)
            dfs(u, v, g, f);
        if (found)
            return;
    }
    path.pop_back();
}

void solve(int tc)
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> sl(n);
    vector<pair<int, pair<int, int>>> edges;
    for (int i = 0; i < m; ++i)
    {
        int u, v, w;
        cin >> u >> v >> w;
        --u, --v;
        edges.push_back({w, {u, v}});
    }
    sort(rall(edges));
    dsu g(n);
    pair<int, int> fin;
    int best = INT_MAX;
    for (auto e : edges)
    {
        if (!g.merge(e.y.x, e.y.y))
        {
            fin = e.y;
            best = e.x;
        }
        else
        {
            sl[e.y.x].push_back(e.y.y);
            sl[e.y.y].push_back(e.y.x);
        }
    }
    found = false;
    path.resize(0);
    dfs(fin.x, -1, sl, fin.y);
    cout << best << " " << ans.size() << "\n";
    for (int e : ans)
        cout << e + 1 << " ";
}

bool multi = true;

signed main()
{
    int t = 1;
    if (multi)
        cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        solve(i);
        cout << "\n";
    }
    return 0;
}