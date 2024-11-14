#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n(odd): ";      // let n=5
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (n / 2 + 1 == i)
            { continue;  }      // i skipped if i=3 and made a different loop for that
            if (n / 2 + 1 == j)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        if (n / 2 + 1 == i)          // this loops run when i=3
        {
            for (int z = 1; z <= n; z++)
            {
                cout << "*";
            }
        }

        cout << endl;
    }

    //or

        // int n;
        // cout << "Enter n(odd): ";
        // cin >> n;

        // for (int i = 1; i <= n; i++)
        // {
        //     for (int j = 1; j <= n; j++)
        //     {
        //         if (i == (n + 1) / 2 || j == (n + 1) / 2)
        //             cout << "*";
        //         else
        //             cout << " ";
        //     }
        //     cout << endl;
        // }

        // return 0;
    
}