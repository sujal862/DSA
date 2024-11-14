#include <iostream>
using namespace std;
int main()
{
    cout<<"enter the radius of circle: ";
    int r;
    cin>>r;
    float area = 3.14*r*r;
    float circumference = 2*3.14*r;
    if (area > circumference)
    cout<<"area is greater than circumference";
    else
    cout<<"circumference is greater than area";

}
