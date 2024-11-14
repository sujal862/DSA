#include <iostream>
using namespace std;

int main()
{
    int x1,y1,x2,y2,x3,y3;
    cout<<"enter 1st point: ";
    cin>>x1>>y1;
    cout << "enter 2st point: ";
    cin >> x2>>y2;
    cout << "enter 3st point: ";
    cin >> x3>>y3;
    int slope1=(y2-y1)/(x2-x1);
    int slope2=(y3-y2)/(x3-x2);
    int slope3=(y3-y1)/(x3-x1);
    if ( slope1 == slope2  && slope1 == slope3)
    cout<<"all 3 points lie on the same line";
    else
    cout<<"the point are not on the same line";
}