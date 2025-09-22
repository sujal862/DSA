#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n; 
    cin>>n;
    vector<long long> sticks(n);
    for(auto &x : sticks){
        cin>>x;
    }
 
    sort(sticks.begin(), sticks.end());
 
    long long median = (n%2 != 0) ? sticks[((n+1)/2)-1] : (long long)( ( sticks[(n/2)-1] + sticks[n/2] ) / 2);
    
    long long min_cost = 0;
    for(auto &x : sticks){
        min_cost += abs(median - x);
    }
    cout<<min_cost<<endl;
}