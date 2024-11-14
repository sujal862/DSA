#include<iostream>
#include<vector>
using namespace std;
vector<long long int> factorial(int n){
    int M = 1000000000 + 7;
    vector<long long int>fact(n+1,1);
    for(int i = 2 ; i<n+1 ; i++){
        fact[i] = (i%M * fact[i-1]%M ) % M;
    }
    return fact;
}
int main(){
    vector<long long int> res = factorial(25);
    for(int i=0;i<res.size();i++){
        cout<<i<<"! = "<<res[i]<<endl;
    }
}