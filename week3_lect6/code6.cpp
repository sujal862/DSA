//factorial
#include <iostream>
using namespace std;
int main()
{

    // best and good way

        int n;
        cin >> n;
        int f = 1;
        for (int i = 1; i <= n; i++)
        {
            f =f* i;
        }
            cout << f << endl;
        
    }
// phaltu ka 'n' to '1' multiply krna ki kosis...makes it long
    // int n;
    // int factorial = 1;
    // cout << "enter a number: ";
    // cin >> n;
    // int originalN = n; // for printing purpose we need to store the original n because it value becomes 0 after loop ends.
    // while (n > 0)
    // {
    //     int a = n;
    //     factorial = factorial * a;
    //     n = n - 1;
    // }
    // cout << originalN << "! = " << factorial;
