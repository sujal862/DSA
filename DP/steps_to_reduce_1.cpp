// #include <bits/stdc++.h>
// using namespace std;
// #define inf INT_MAX

// //Top down 
// vector<int> dp;
// int f(int n){
//     if(n == 1) return 0; // already reached 1
//     if(n == 2 or n == 3) return 1;
//     if(dp[n] != -1) return dp[n]; //nth state is precomputed 

//     return dp[n] = 1 + min({f(n-1), (n%2 == 0) ? f(n/2) : inf, (n%3 == 0) ? f(n/3) : inf});
// }

// int main(){
//     int n; // n -> 1000 max
//     cin>>n;
//     dp.clear();
//     dp.resize(1005, -1);
//     cout<<f(n);
// }



#include <bits/stdc++.h>
using namespace std;
#define inf INT_MAX
vector<int> dp;

//bottom up (tabulation)
int main(){
    int n; // n -> 1000 max
    cin>>n;
    dp.clear();
    dp.resize(n+1, -1);
    
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    //left to right
    for(int i = 3; i <= n; i++){
        dp[i] = 1 + min({dp[i-1], (i%2 == 0) ? dp[i/2] : inf, (i%3 == 0) ? dp[i/3] : inf});
    }
    cout<< dp[n]<<"\n";
}