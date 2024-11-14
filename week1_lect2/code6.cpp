#include<iostream>
using namespace std;
int main()
{
   // float x; -> cant use this because according to question input should be an integer
//     int x;
//     cout<<"enter the integer you want half of number : ";
//     cin>>x;
//     float y = x/2.0;
//     cout<<y;

//or

    int x;
    cout<<"enter the integer you want half of number : ";
    cin>>x;  //x=7
    float y=(float)x; //i.e y=7.0
    cout<<y/2;

}