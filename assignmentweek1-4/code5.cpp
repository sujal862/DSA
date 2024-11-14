#include <iostream>
using namespace std;
int main()
{
    cout<<"input a point: ";
    int x,y;
    cin>>x>>y;
    if (y==0)
    cout<<"point lies on x-axis";
    else if (x==0)
    cout<<"point lies on y-axis";
    else if (x==0 && y==0)
    cout<<"point lies on origin";
    else if (x!=0 && y!=0)
    cout<<" point lies somwhere on plane";

}