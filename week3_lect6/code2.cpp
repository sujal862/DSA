#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"enter a number :";
cin>>n;
int a=n;
int count =0;
while(n>0){
    n=n/10;
count = count +1;
}
if(a==0) cout<<1;
else cout<<"number of digits is: "<<count;
}

    