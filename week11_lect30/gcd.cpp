// Eucledian Algorithm  =  T.C = O(logb)
#include<iostream>
using namespace std;
int gcd (int a, int b){
    if(a==0) {return b;}
     return gcd(b%a,a);  // ex = gcd(5, 2) is passed from main than this line will return (2%5, 5) = (2, 5) -> correct seq
}

int main (){
    int a,b;
    cin>>a>>b;
    
    cout<<gcd(a,b); // standard = a<b but if a>b than also it will handle upr jaka reverse khud hojayaga
}



// Note = gcd(a, b)*lcm(a,b) = a*b