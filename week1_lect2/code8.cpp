#include<iostream>
using namespace std;
int main()
{  
    float x;
    cout<<"enter float number : ";
    cin>>x;
    if(x>0)
    cout<<"fractional part is : " <<x-(int)x;

    else

    cout<<"fractional part is : " <<x-((int)x-1);
}