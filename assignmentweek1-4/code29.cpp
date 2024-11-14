#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int a = 1;
    int b = 2 * n - 1;
    int x=n;
    int y=n;
    //upper part of 3 line
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j == x || j == y)  cout << "*";
            else        cout << " ";
        }
        cout<<endl;
        x++;
        y--;
    }
    //lower part of 3 line
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= 2 * n - 1; j++)
            {
                if (j == a || j == b)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
            a++;
            b--;
        }
    }

    /*
    or in short
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int a = n;
    int b = n;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j == a || j == b)
                cout << "*";
            else
                cout << " ";
        }
        if (i < n)
        {
            b--;
            a++;
        }
        else
        {
            b++;
            a--;
        }
        cout << endl;
    }
}
*/