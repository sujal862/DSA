/*Logic -> continue dividing n by 2 until odd no. or 1 comes(dono ma sa koi ak jbtk na ajay)
the point at which odd no. comes return false else return true (i.e at last 1 comes) */ 

#include<iostream>
using namespace std;
bool PowerOf(int n){
    if(n==1) return true;
    else if(n%2!=0){
        return false;
    }
    else{
        return PowerOf(n/2);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<PowerOf(n);
}