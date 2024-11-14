//check wether triangle is scalene or equilateral or isoceles
#include <iostream>
using namespace std;
int main()
{   
    int x,y,z;
    cout<<"side1: ";
    cin>>x;
    cout << "side2: ";
    cin >> y;
    cout << "side3: ";
    cin >> z;
    if ((x==y && x!=z) || (x==z && x!=y) || (y==z && y!=x)){
    cout<<"This is isoceles triangle";}
    else{
    if (x==y && y==z){
    cout<<"this triangle is equilateral triangle"; }
    else{
    if (x!=y && y!=z && x!=z) {
    cout<<"this triangle is scalene triangle";
    }
    }
    }
}
