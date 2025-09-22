#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int g(int i, int j, vector<int>& arr){ //returns the new color after mixing the colors in range[i,j];
    ll sum = 0;
    for(int m = i; m <= j; m++){
        sum = (sum % 100 + arr[m]%100) % 100;
    }
    return sum;
}

//Top down soln 
vector<vector<ll>> dp;
ll f(int i, int j, vector<int>& arr){
    if(i == j) return 0; //smoke of single color is 0
    if(dp[i][j] != -1) return dp[i][j];

    ll res = LLONG_MAX;
    for(int k = i; k <= j-1; k++){
        res = min(res, f(i, k, arr) + f(k+1, j, arr) + g(i, k, arr)*g(k+1, j, arr));
    }

    return dp[i][j] = res;
    
}

//Bottop Up Soln
ll fbu(vector<int>& arr){
    int n = arr.size();
    dp.clear();
    dp.resize(n+5, vector<ll>(n+5, 0));

    for(int len = 2; len <=n; len++){
        for(int i = 0; i <= n-len; i++){ // all len -len size ka subarray ka start index
            int j = i + len -1; //curr len size subaaray last index
            ll res = LLONG_MAX;
            for(int k = i; k <= j-1; k++){
                res = min(res, dp[i][k] + dp[k+1][j] + g(i, k, arr)*g(k+1, j, arr));
            }

            dp[i][j] = res;
        }
    }
    return dp[0][n-1];
}


int main() {
    int n;
    while(cin >> n){
        vector<int> arr(n); //array of colors
        for(auto& x : arr) cin>>x;
        dp.clear();
        dp.resize(n+5, vector<ll>(n+5, -1));
        // cout << f(0, n-1, arr) << endl; //top down
        cout << fbu(arr) << endl; // bottom up
    }
    return 0;
}