#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"enter 3 positive integer:";
    cin>>x>>y>>z;
    if(x > y && x > z)
    cout<<x<<":is greatest";
    if(y > x && y > z)
    cout<<y<<":is greatest";
    if(z > y && z > x)
    cout<<z<<":is greatest";
}
