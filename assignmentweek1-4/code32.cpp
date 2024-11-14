#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int a = n + 1;
    int b = n + 1;

    for (int i = 1; i <= 2 * n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j == a || j == b || i == n + 1 || j == n + 1)
                cout << "*";
            else
                cout << " ";
        }
        if (i <= n)
        {
            b--;
            a++;
        }
        else // i>n+1
        {
            b++;
            a--;
        }
        cout << endl;
    }
}