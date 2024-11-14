#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2) return 1;   //because 1st and 2nd term of fibbonaci series is 1;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
}