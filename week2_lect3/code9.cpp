#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "enter 3 positive integer:";
    cin >> x >> y >> z;
    if (x > y)
    {
        if (x>z)
        {
            cout<<x<<" is greatest";
        }
        else{  //ie. z>x
            cout<<z<<" is greatest";
        }
    }
    else{  //ie. y>x
        if (y>z){
        cout<<y<<" is greatest";
        }
        else{  //ie. z>y
        cout<<z<<" is greatest";
        }

    }


       //or
   /* int x,y,z;
    cout<<"enter 3 positive integer:";
    cin>>x>>y>>z;
    if (x>y){
        if(x>z){
            cout<<x<<" is gretest";
        }
    }
    if (z>y){
        if(z>x){
            cout<<z<<" is gretest";
        }
    }  
    if (y>z){
        if(y>x){
            cout<<y<<" is gretest";
        }
    } */   
  
}
