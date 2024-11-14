// REVERSE OF NUMBER
#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter the number ";
    cin >> n;
    int reverse = 0, z = 0;
    while (n > 0)
    {
        reverse = reverse * 10;
        z = n % 10;
        reverse = reverse + z;
        n = n / 10;
    }
    cout << reverse;

    // alternate(jugar way)
    //  int n, z;
    //  cout << "enter the number: ";
    //  cin >> n;
    //  while (n > 0)
    //  {
    //      z = n % 10;
    //      n = n / 10;
    //      if (n >= 0)
    //      {
    //          cout << z;
    //      }
    //  }
}