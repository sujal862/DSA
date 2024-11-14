#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)  //i--> is row number
    {
        for (int j = 1; j <= i; j++)  //j-->is colun number
        {
            cout << "*";
        }
        cout << endl;
    }
}