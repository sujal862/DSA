// print sum of even digits in a given number
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
        if (z % 2 == 0)
        {
            sum = sum + z;
        }
    }
    cout << "sum of even digits of number:=" << sum;
}