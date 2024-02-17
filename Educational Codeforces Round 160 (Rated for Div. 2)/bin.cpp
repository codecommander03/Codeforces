#include <bits/stdc++.h>
using namespace std;

void solve_even()
{
    int n;
    std::cin >> n;
    std::cout << "-1\n";
    return;

    stack<int> o, e;
    for (int i = 2; i <= n * n; i++)
    {
        if (i % 2)
            o.push(i);
        else
            e.push(i);
    }

    vector<vector<int>> v(n, vector<int>(n, -1));

    v[0][0] = 1;
    cout << "~";

    for (int i = 1; i < n; i++)
    {
        v[i][i] = o.top();
        o.pop();
        v[0][i] = o.top();
        o.pop();
        v[i][0] = e.top();
        e.pop();
    }

    for (int k = 2; k <= n - 1; k++)
    {
        for (int i = 1; i < k; i++)
        {
            if (o.size() >= 2)
            {
                v[i][k] = o.top();
                o.pop();
                v[k][i] = o.top();
                o.pop();
            }
            else
            {
                v[i][k] = e.top();
                e.pop();
                v[k][i] = e.top();
                e.pop();
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << v[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void solve()
{
    int n;
    std::cin >> n;
    if (n % 2 == 0)
    {
        if (n == 2)
        {
            // std::cout<<"-1\n";
            // return;
        }
        // solve_even();
        // return;
    }

    stack<int> o, e;
    for (int i = 2; i <= n * n; i++)
    {
        if (i % 2)
            o.push(i);
        else
            e.push(i);
    }

    vector<vector<int>> v(n, vector<int>(n, -1));

    v[0][0] = 1;

    for (int k = 1; k <= n - 1; k++)
    {
        for (int i = 0; i < k; i++)
        {
            if (o.size() >= 2)
            {
                v[i][k] = o.top();
                o.pop();
                v[k][i] = o.top();
                o.pop();
            }
            else
            {
                v[i][k] = e.top();
                e.pop();
                v[k][i] = e.top();
                e.pop();
            }
        }
        v[k][k] = e.top();
        e.pop();
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << v[i][j] << " ";
        }
        std::cout << "\n";
    }
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