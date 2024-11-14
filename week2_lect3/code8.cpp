#include <iostream>
using namespace std;
int main()
{
    cout<<"enter a number\n";
    int x;
    cin>>x;
    if((x%5==0 || x%3==0) && (x!=15))
    cout<<"number is divisible by 3 or 5 but not by 15";
    else
    cout<<"condition is not satisfied";
}