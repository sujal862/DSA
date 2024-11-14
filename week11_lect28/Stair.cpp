#include<iostream>
using namespace std;
int stair(int n){
    if (n==2) return 2; //i.e there is fixed 2 ways of climbing 2 stairs
    if(n==1) return 1; //i.e there is fixed 1 way of climbing 1 stairs

    return stair(n-1) + stair(n-2) +stair(n-3);
}
int main(){
    int n;
    cin>>n;
    cout<<stair(n);
}

