#include<iostream>
using namespace std;
int main()
{ 
    cout<<"enter a number : ";
    int x;
    cin>>x;
    int y= x % 2;
    if (y==0)  //comparision operator
    {cout<<"number is even";}
    else  //or if(x%2!=0);
    {cout<<"number is odd";}


}