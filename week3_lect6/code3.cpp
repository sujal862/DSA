// SUM OF ALL DIGITS IN A NUMBER
#include <iostream>
using namespace std;
int main()
{
    int n, z;
    cout << "enter the number ";
    cin >> n;
    int sum = 0;
    while (n > 0)
    {
        z = n % 10;
        n = n / 10;
        sum = sum + z;
    }
    cout << "sum of digits of number =" << sum;
}