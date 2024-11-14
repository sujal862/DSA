#include<iostream>
using namespace std;
int main()
{
    
    float x;
    cout<<"enter float number : ";
    cin>>x;
    int z = (int)x;  //z-> int part of x
    if(x<0) z=((int)x-1); 
    float y = x-z;  //y is fractional part of x
    cout<<"fractional part is : " <<y;
}