#include <iostream>
using namespace std;
int main()
{
    //q1.// int n;
    // cout << "Enter n: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
        
    // }

    //q2.

    // int n;
    // cout << "Enter n: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n+1-i; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;

    // }

    //q3.

    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++){
            cout<<char(j+64);
        }
        cout<<endl;

    }
}

