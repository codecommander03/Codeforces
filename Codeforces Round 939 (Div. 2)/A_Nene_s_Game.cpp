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
    int k, q, x;
    std::cin >> k >> q;
    std::vector<int> v(k);
    for(int i = 0; i < k; i++){
        std::cin >> v[i];
    }
    for (int i = 0; i < q;i++){
        std::cin >> x;
        std::cout << std::min(v[0] - 1, x) << " \n"[i == q - 1];
    }
}
 
int32_t main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // std::cout<<std::fixed<<std::setprecision(0);

    int t=1;
    std::cin>>t;
    while(t--) solve();
}