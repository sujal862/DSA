#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)               // i-->odd
            {
                if (j % 2 == 0)           // j-->even
                {
                    cout << "0";
                }
                else                      // j-->idd
                    cout << "1";
            }
            else                         // that is i%2==0
            {
                if (i % 2 == 0)
                {                        // i-->even
                    {
                        if (j % 2 == 0)  // j-->even
                        {
                            cout << "1"; 
                        }
                        else              // j-->odd
                            cout << "0";
                    }
                }
            }
        }
        cout << endl;
    }
}
