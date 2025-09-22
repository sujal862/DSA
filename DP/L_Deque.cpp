#include <bits/stdc++.h>
using namespace std;
#define ll long long 

ll arr[3005];
ll dp[3005][3005];
ll f(int i, int j){
    if(i == j) return arr[i]; // only one ele left 
    if(dp[i][j] != -1) return dp[i][j];
    return dp[i][j] = max(arr[i] - f(i+1, j), arr[j] - f(i, j-1)); //maximize x-y (taro move at start)
}

int main(){
    int n;
    cin>>n;
    for(auto& x : arr){
        cin>>x;
    }
    memset(dp, -1, sizeof dp);
    cout<<f(0, n-1);
}