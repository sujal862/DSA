#include <bits/stdc++.h>
using namespace std;

int f(int n){
    if(n==1 || n == 2) return n;
    return f(n-1) + (n-1)* f(n-2); //if nth frnd will go single  + if nth friend will go in pair
}

int main(){
    int n = 3;
    cout<<f(n)<<endl;
}