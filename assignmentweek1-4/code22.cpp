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
        // number
        for (int k = i; k >= 1; k--)
        {
            cout << k;
        }
        cout << endl;
    }
}