#include <bits/stdc++.h>
using namespace std;

// Macros for convenience
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define rrep(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define trav(a, x) for (auto &a : x)

// Constants
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ld EPS = 1e-9;
// Input and Output
template <typename T>
void read(vector<T> &v) { for (auto &x : v) cin >> x; }
template <typename T>
void print(const vector<T> &v) { for (const auto &x : v) cout << x << " "; cout << endl; }

void solve() {
    int n, m;
    cin>>n>>m;
    vector<int> L(n+1, 0); //number of queries with left as i
    vector<int> R(n+1, 0); //number of queries with right as i
    while(m--){ 
        int l, r;
        cin>>l>>r;
        L[l]++;
        R[r]++;
    }

    //dp
    vector<int> dp(n+1, 0);
    //Base case
    dp[1] = L[1]; // only range starting from 1 wil affect 1st box
    for(int i = 2; i <=n; i++){ // how many query will affect ith box (i.e also equal to numb of coins at ith box)
        dp[i] = L[i] - R[i-1] + dp[i-1];
    }

    vector<int> c(10000005, 0); // there are c[i] number of boxes with ith coin
    for(auto x : dp){
        c[x] ++; 
    }

    // stores number of boxes having atleast i coins -> suffix sum
    for(int i = c.size()-2; i >= 0; i--){
        c[i] = c[i] + c[i+1];
    }

    //Now Process Q queries as : How many coin boxes have atleast X coins.
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<c[x]<<"\n";;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}