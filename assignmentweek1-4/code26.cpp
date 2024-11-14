#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int m = n - 1;
    int x = n + 1;
    for (int y = 1; y <= 2 * n - 1; y++)
    {
        cout << char(y+64);
    }
    cout << endl;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << char(j+64);
        }
        for (int z = 1; z <= 2 * i - 1; z++)
        {
            cout << " ";
        }
        // stars
        for (int k = x; k <= 2 * n - 1; k++)
        {
            cout << char(k+64);
        }
        cout << endl;
        x++;
    }
}