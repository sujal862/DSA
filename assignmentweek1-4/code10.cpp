#include <iostream>
using namespace std;
int main()
{
    // Q1 | int i;
    // for(i=1; i<=100;i+=2)
    // cout<<i<<endl;


    // Q2 | int i;
    // for(i=1; i<=100;i++){
    // if(i%3==0)  cout<<i<<endl;}

    // Q3 | int i,n;
    // cout<<"enter the number: ";
    // cin>>n;
    // for (i=1;i<=(n*10);i++)
    // if (i%n==0) cout<<i<<endl;

    // Q5 | int i;
    // int a =3;
    // for(i=1;i<=10;i++){
    // cout<<a<<endl;
    // a=a*4;
    // }

    int i =65;
    while(i <= 90)
    {
        char z = char(i); // typecasting
        
        cout << z << ":" << i << endl;
        i=i+1;
    }
}
