#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int m=n-1;
    int nsp = 2 * n - 5;
    // 2n-1 stars
    for (int y = 1; y <= 2 * n - 1; y++)
    {
        cout << "*";
    }
    cout << endl;
    for (int i = 1; i <= m; i++)
    { // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int z = 1; z <= 2 * i - 1; z++)
        {
            cout << " ";
        }
        // stars
        for (int k = 1; k <= n - i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for(int p=2;p<=m;p++){
        //stars
        for(int j=1;j<=p;j++){
            cout<<"*";
        }
        //spaces
        for(int h=1;h<=nsp;h++){
            cout<<" ";
        }
        for(int f=1;f<=p;f++){
            cout<<"*";
        }
        cout<<endl;
        nsp=nsp-2;
    }
    for (int s = 1; s <= 2 * n - 1; s++)
    {
        cout << "*";
    }
}
