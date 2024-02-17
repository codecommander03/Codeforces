#include <bits/stdc++.h>
using namespace std;

vector<long long> r;
vector<long long> l;

int ok(long long k, int n)
{
    long long x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        x = max(l[i], max((long long)0, x - k));
        y = min(y + k, r[i]);
        if (x <= y)
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

void solve()
{
    int n;
    cin >> n;
    l.clear();
    r.clear();
    for (int i = 0; i < n; i++)
    {
        long long a, b;
        cin >> a >> b;
        l.push_back(a);
        r.push_back(b);
    }
    long long x = -1;
    for (long long b = 1e9; b >= 1; b /= 2)
    {
        while (!ok(x + b, n))
            x += b;
    }
    cout << x + 1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        solve();
    }
    return 0;
}