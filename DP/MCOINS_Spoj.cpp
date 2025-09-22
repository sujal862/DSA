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

// Debugging (Comment these out for competitive environments)
void debug_out() { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
    cerr << H << " ";
    debug_out(T...);
}
#ifndef ONLINE_JUDGE
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]: ", debug_out(__VA_ARGS__)
#else
#define debug(...)
#endif

// Functions for modular arithmetic
ll add(ll a, ll b, ll m = MOD) { return (a + b) % m; }
ll sub(ll a, ll b, ll m = MOD) { return (a - b + m) % m; }
ll mul(ll a, ll b, ll m = MOD) { return (a * b) % m; }
ll binpow(ll a, ll b, ll m = MOD) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
ll inv(ll a, ll m = MOD) { return binpow(a, m - 2, m); }
ll div(ll a, ll b, ll m = MOD) { return mul(a, inv(b, m), m); }

// Input and Output
template <typename T>
void read(vector<T> &v) { for (auto &x : v) cin >> x; }
template <typename T>
void print(const vector<T> &v) { for (const auto &x : v) cout << x << " "; cout << endl; }

void solve() {
    int k, l, n;
    cin>>k>>l>>n;
    vector<int> arr(n);
    read(arr);
    vector<bool> dp(1000005 , 0);
    dp[1] = 1; dp[k] = 1; dp[l] = 1; //all are winning state

    for(int i = 2; i <= 1000000; i++){
        if(i == k || i == l) continue; //already computed (win)

        dp[i] = !(dp[i-1] and ((i-k < 0) ? 1 : dp[i-k]) and ((i-l < 0) ? 1 : dp[i-l])); //if all 3 are winning state then ith is lossing & if one is a loosing state then ith is winning
    }   

    for(auto x : arr){
        if(dp[x] == 1) cout<<"A"; //x -> winning state
        else cout<<"B";
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