// #include <bits/stdc++.h>
// using namespace std;
#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>
#include <climits>
#include <cmath>
#include <iterator>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>
#include <stack>
#include <queue>
#include <iomanip>
#include <numeric>
    
#define int            long long int

int N = 1e7 + 1;
std::vector<int> sieve(N, 0);

void primeSieve()
{

    for (int i = 1; i <= N; i++)
    {
        sieve[i] = i;
    }

    // start from 2 to N
    for (int i = 2; i <= N; i++)
    {
        // whether a no is prime
        if (sieve[i] == i)
        {

            for (int j = i * i; j <= N; j += i)
            {
                // mark of them if they are already not marked with the value i
                if (sieve[j] == j)
                {
                    sieve[j] = i;
                }
            }
        }
    }
}

void solve(){
    int l, r;
    std::cin>>l>>r;
    bool flag = false;
    for (int i = l; i <= r;i++){
        if(sieve[i] != i){
            int x = sieve[i], y = i / sieve[i];
            std::cout << x << " " << x*(y-1) << "\n";
            flag = true;
            break;
        }
    }
    if(!flag){
        std::cout << -1 << "\n";
    }
}
 
int32_t main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // std::cout<<std::fixed<<std::setprecision(0);
    primeSieve();
    //std::cout << sieve[3] << "--\n";

    int t=1;
    std::cin>>t;
    while(t--) solve();
}