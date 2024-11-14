// print sum of number and its reverse
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    int x=n;  //storing the value of original n in x to use while printing the sum
    int reverse = 0, z = 0;
    while (n > 0)
    {
        reverse = reverse * 10;
        z = n % 10;
        reverse = reverse + z;
        n = n / 10;
    }
    cout << "sum :"<<reverse+x;
}