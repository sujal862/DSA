#include <iostream>
using namespace std;
int main()
{      //dito same to lect8 q1
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        } // stars
        for (int k = 1; k <= 2*i-1; k++)
        {
            cout << k;
        }
        cout << endl;
    }
}

/*  q2.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        } // stars
        for (int k = 1; k <= 2*i-1; k++)
        {
            cout << char(k+64);
        }

        cout << endl;
    }
}
*/