#include <iostream>
using namespace std;

int main()
{
    cout << "enter two numbers";
    int x, y;
    cin >> x >> y;

    if (x > y)
        cout << "first number " << x << " is largest";
    else
        cout << "second number " << y << " is largest";
}
