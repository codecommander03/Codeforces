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
    
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//										सुखदुःखे समे कृत्वा लाभालाभौ जयाजयौ।										//
//										ततो युद्धाय युज्यस्व नैवं पापमवाप्स्यसि॥  								   		 //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//			 ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣷⣤⠀⠀⠀⠀⠀⠀⠀⡀⠀⣀⣀⣴⣶⠞⠁⣀⣤⠤⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀						 //
//			 ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣾⠿⣿⣿⡯⠀⠀⠀⠀⠀⢀⣴⣿⣿⣿⣿⣿⣧⣤⣾⣿⣁⣀⠀⠀⠀⢀⣀⣤⣤⣄⠀⠀⠀⠀⠀					⠀  //
//			 ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⡏⠁⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⠀⠀⣰⣾⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀			⠀		   //
//			 ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⠟⠛⠿⣿⣿⣿⣿⣿⣶⣶⣦⡀ 		 			  //
//			 ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣶⣿⣿⣶⠀⠀⠀⠀⠀⠀⠀⠀⠘⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡉⠀⠀⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿⣿⠁  				  //
//			 ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⣠⣤⣤⣴⣿⣿⣿⣿⣿⣿⣿⡿⠃⠀				     //
//			 ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⢿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠛⠛⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣿⣿⣿⣿⣿⡿⠿⠿⠿⠿⠿⠋⠀⠀⠀					 //
//			 ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠻⠿⠿⣿⣿⣷⣶⣶⣶⣾⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣤⡀⠀⠀⠀⠀⠀⠀⠀					  //
//			 ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣨⣿⠟⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⢿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀					   //
//			 ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⠃⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠀⢸⣿⣿⣿⣿⡿⠇⠀⠀⠀⠀					   //
//			 ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣤⣤⣤⣤⣶⣿⣷⣄⠀⠀⠀⠀⠸⣿⣿⣷⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠉⢹⣿⣿⠉⠀⠀⠀⠀⠀⠀					⠀//
//			 ⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⢿⣿⠇⠀⠀⠀⠀⠀⢸⣿⡏⠀⠀⠀⠀⠀⠀⠀				⠀    //
//			 ⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⣿⡿⠛⠛⢛⣿⣿⣿⣿⣿⣿⣿⣿⣷⣤⣤⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣸⣿⡁⠀⠀⠀⠀⠀⣸⣿⡇⠀⠀⠀⠀⠀⠀					 //
//			 ⠀⠀⠀⠀⠀⠀⠀⢰⣿⣿⠟⠀⠀⠀⠀⠛⠛⠛⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⣠⣤⣴⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀				     //
//			 ⠀⠀⠀⠀⠀⠀⠀⢸⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠄⠀⢿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀					  //
//			 ⠀⠀⠀⠀⠀⠀⠀⢸⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⠋⠉⠻⢿⣷⣦⣼⣿⣿⣟⣉⣠⣤⣤⣄⠀⠀⠀⠀⠀					 //
//			 ⠀⣠⣄⠀⠀⠀⠀⢸⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⣿⣿⣿⣿⣿⠀⢹⣿⣿⣿⣆⠀⢀⣴⣤⣤⡿⠉⠉⠉⠉⠉⠁⠀⠀⠀⠉⢷⠀⠀⠀⠀					  //
//			 ⣼⣿⣿⣦⣤⣀⠀⢸⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⣿⣿⣿⣿⣿⠿⠿⢿⣿⠁⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀					   //
//			 ⠈⠿⣿⣿⣿⣿⣷⣾⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⡀⠀⠘⠛⠛⠋⠁⠀⢰⣿⣷⣶⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀				       //
// 		 		⠉⢿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣷⡄⠀⠀⠀⠀⠀⢠⣾⢿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀			            //
//			 ⠀⠀⠀⠀⠹⣿⣿⠿⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⢰⣿⠏⠀⠈⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀				        //
//			 ⠀⠀⠀⠀⠀⠈⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣏⠀⠀⠀⢀⣴⡿⠋⠀⠀⠀⠸⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀					     //
//			 ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠙⢿⣿⣿⣿⣿⣷⣶⣶⣿⠟⠁⠀⠀⠀⠀⠀⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀						 //
//				 ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠻⠿⠿⠟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀								 //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 

void solve(){
    int n, m;
    std::cin>>n>>m;
    std::vector<std::vector<char>> v(n, std::vector<char>(m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            std::cin>>v[i][j];
        }
    }

    std::set<char> s1, s2;
    for (int i = 0; i < m;i++){
        s1.insert(v[0][i]);
        s2.insert(v[n - 1][i]);
    }
    if(s1.size()==1 && s2.size()==1 && *s1.begin()!=*s2.begin()){
        std::cout << "NO\n";
        return;
    }
    s1.clear();
    s2.clear();
    for (int i = 0; i < n;i++){
        s1.insert(v[i][0]);
        s2.insert(v[i][m - 1]);
    }
    if(s1.size()==1 && s2.size()==1 && *s1.begin()!=*s2.begin()){
        std::cout << "NO\n";
        return;
    }
    std::cout << "YES\n";
}
 
int32_t main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // std::cout<<std::fixed<<std::setprecision(0);

    int t=1;
    std::cin>>t;
    while(t--) solve();
}