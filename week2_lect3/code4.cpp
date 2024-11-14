//is 3 digit no. or not ?
#include<iostream>
using namespace std;
int main()
{
    cout<<"enter a number: ";
    int x;
    cin>>x;
    if(x>99 && x<10000){
        cout<<"number is a three digit number";
    }
    else {
        cout<<"number is not a three digit number";
    }
}