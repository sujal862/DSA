#include<iostream>
using namespace std;
string decimal_to_binary(int num){
    string result= "";
    while(num>0){
        //even
        if(num%2==0) result = "0" + result;
        //odd
        else result = "1" + result;
        num/=2;
    }
    return result;
}

int main(){
    int x;
    cin>>x;
    cout<<decimal_to_binary(x);
}