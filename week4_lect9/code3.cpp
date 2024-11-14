#include <iostream>
using namespace std;
int gcd(int a,int b){
    int hcf=1;   //initialisation of hcf is very important to run the program correctly without any error.
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            hcf=i; 
            break;  }    //once the hcf is finded exit the loop
    }
    return hcf;
}
int main()
{
    int a, b;
    cout << "enter first number: ";
    cin >> a;
    cout << "enter second number: ";
    cin >> b;
    cout << gcd(a, b);
}