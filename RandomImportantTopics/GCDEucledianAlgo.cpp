// Eucledian Algorithm  =  T.C = O(logb)
#include<iostream>
using namespace std;
int gcd (int a, int b){
    if(a%b==0) {return b;}
     return gcd(b,a%b);  // ex = gcd(2,5) is passed from main than this line will return (5,2%5) = (5, 2) -> correct seq
}

int main (){
    int a,b;
    cin>>a>>b;
    
    cout<<gcd(a,b); // standard = b<a but if b>a than also it will handle upr jaka reverse khud hojayaga
}



// Note = gcd(a, b)*lcm(a,b) = a*b