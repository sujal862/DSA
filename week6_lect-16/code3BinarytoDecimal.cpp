//binary to decimal
#include<iostream>
using namespace std;
int main(){
    int a[]={0,0,1,1};
    int m =sizeof(a)/sizeof(a[0]);
    int mult=1,sum=0,x=1;
    for(int i=m-1;i>=0;i--){
        x=mult*a[i];
        mult=mult*2;
        sum=sum+x;
    }
    cout<<"decimal num: "<<sum;
}
    