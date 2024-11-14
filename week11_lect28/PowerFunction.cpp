#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==1) return a; 
    if(b==0) return 1; //beacause a^0 is 1
    int ans= power(a,b/2);  //single call only (one extra variable will be made for each time call is done i.e SC=O(logb))
    if(b%2==0) return ans *ans;  //even power
    else return a *ans *ans ;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
}
