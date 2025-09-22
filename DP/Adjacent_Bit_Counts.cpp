#include <bits/stdc++.h>
using namespace std;
    
int dp[105][105][2];
int f(int n, int k, int last){
    if(n == 0) return 0;
    if(n == 1){
        if(k == 0) return 1;
        else return 0; 
    }
    if(dp[n][k][last] != -1) return dp[n][k][last];

    int res = 0;
    if(last == 1) res = f(n-1, k, 0) + f(n-1, k-1, 1); // n-1th bit as 0 + n-1th bit as 1
    else res = f(n-1, k, 0) + f(n-1, k, 1);

    return dp[n][k][last] = res;
}

void solve() {
    int a, n, k;
    cin>>a>>n>>k;
    memset(dp, -1, sizeof dp);
    int ans = f(n, k, 0) + f(n, k, 1);
    cout<<a<<" "<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}