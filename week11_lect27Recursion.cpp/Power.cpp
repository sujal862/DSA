#include<iostream>
using namespace std;
int Power(int a,int b){
    if(b==0) return 1;  // anything raised to the power 0 is 1 
    return a*Power(a,b-1);
}
int main(){
    cout<<Power(2,4);
}

//bakwas method ha ya - binary exponentiation method in next lect(log tc)