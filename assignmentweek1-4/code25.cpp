#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER n:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // letter
        for (int k = i; k >= 1; k--)
        {
            cout << char(k + 64);
        }
        for (int y = 1; y <= i - 1; y++)
        {
            cout << char(y + 65);
        }
        cout << endl;
    }
}