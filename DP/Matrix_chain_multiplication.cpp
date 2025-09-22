#include <bits/stdc++.h>
using namespace std;

//Top Down soln

vector<vector<int>> dp;
int f(int i, int j, vector<int>& arr){
    if(i == j || i+1 == j) return 0; // 1 matrix left
    if(dp[i][j] != -1) return dp[i][j];

    int ans = INT_MAX;
    for(int k = i+1; k < j; k++){
        ans = min(ans, f(i, k, arr) + f(k, j, arr) + arr[i]*arr[j]*arr[k]); // left + right + (l*r)
    }
    return dp[i][j] = ans;
}
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto& x : v) cin>>x;
    dp.clear();
    dp.resize(n+5, vector<int>(n+5, -1));
    cout<<f(0, n-1, v)<<"\n";
    return 0;
}


//Bottom Up

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> dp;
// int f(int i, int j, vector<int>& arr){
//     if(i == j || i+1 == j) return 0; // 1 matrix left
//     if(dp[i][j] != -1) return dp[i][j];

//     int ans = INT_MAX;
//     for(int k = i+1; k < j; k++){
//         ans = min(ans, f(i, k, arr) + f(k, j, arr) + arr[i]*arr[j]*arr[k]); // left + right + (l*r)
//     }
//     return dp[i][j] = ans;
// }
// int main() {
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(auto& x : arr) cin>>x;
//     dp.clear();
//     dp.resize(n+5, vector<int>(n+5, 0)); //wi;; store min of a subarray

//     for(int len = 3; len <= n; len ++){
//         for(int i = 0; i + len - 1 < n; i++){ // i+len-1 = last index of len size subaaray
//             int j = i + len -1; // last index
//             dp[i][j] = INT_MAX;
//             for(int k = i+1; k < j; k++){
//                 dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + arr[i]*arr[j]*arr[k]); // left + right + (l*r)
//             }
//         }
//     }

//     cout<<dp[0][n-1]<<"\n";
//     return 0;
// }