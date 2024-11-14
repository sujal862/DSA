#include<iostream>
using namespace std;
int main()
{
    int a, n;
    cout << "enter base :";
    cin >> a;
    cout << "enter exponent :";
    cin >> n;
    bool flag=true;
    if(n<0){
        flag = false;
        n=-n;
    }
    float power = 1;
    for (int i = 1; i <= n; i++){
        power = power * a;
        }
    if (flag==false){
        power = 1 / power;
        n=-n;
    }
    cout << a << " raised to the power " << n << " is " << power;
    
}
