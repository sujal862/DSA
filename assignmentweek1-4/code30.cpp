#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int x = n;
    int y = n;
    // upper part of 3 line
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j == x || j == y)
                cout << i;
            else
                cout << " ";
        }
        cout << endl;
        x++;
        y--;
    }
}