// CALCULATOR
#include <iostream>
using namespace std;
int main()
{
    // float a,b;
    // char ch;
    // cout<<"Enter the problem in fromat(2*4): ";
    // cin>>a>>ch>>b;
    // if(ch == '+' ) cout << a + b;
    // if (ch == '-') cout << a - b;
    // if (ch == '/') cout << a / b;
    // if (ch == '*') cout << a * b;

    float a,b;
    char ch;
    cout<<"Enter the problem in fromat(2*4): ";
    cin>>a>>ch>>b;
    switch (ch){
        case '+':
        cout << a + b;
        break;
        case '/':
        cout << a / b;
        break;
        case '*':
        cout << a * b;
        break;
        case '-':
        cout << a - b;
        break;
    }
}