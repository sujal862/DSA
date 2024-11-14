#include<iostream>
using namespace std;
int OddSum(int a,int b){
    if(a>b) return 0;
    else if(a%2!=0){  //a is odd
        return a+OddSum(a+2,b);
    }
    else{
        return OddSum(a+1,b);
    }
}
int main(){
    int a , b;
    cin>>a>>b;
    cout<<OddSum(a,b)<<endl;
}