#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll dp[2005][2005][8];

ll f(vector<int>& a, vector<int>& b, int i, int j, int k){
    if(i == a.size() || j == b.size()) return 0;
    if(dp[i][j][k] != -1) return dp[i][j][k];

    ll res = 0;
    if(a[i] == b[j]) res = 1 + f(a, b, i+1, j+1, k);
    else{
        //case 1 : Transform current mismatch if allowed
        if(k > 0){
            res = 1 + f(a, b, i+1, j+1, k-1); 
        }
        //case 2 : Skip one character from either string
        res = max({res, f(a, b, i+1, j, k), f(a, b, i, j+1, k)});
    }

    return dp[i][j][k] = res;
}
int main() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n);
    vector<int> b(m);
    for(auto&x : a) cin>>x;
    for(auto&x : b) cin>>x;
    memset(dp, -1, sizeof dp);
    cout<<f(a, b, 0, 0, k)<<"\n";
    return 0;
}