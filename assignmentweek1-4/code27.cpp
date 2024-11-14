#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int m = n - 1;
    int x=n-1;
    for (int y = 1; y <= n; y++)
    {
        cout << y;
    }
    for(int p=n-1;p>=1;p--){
        cout<<p;
    }
    cout << endl;
    for (int i = 1; i <= m; i++)    //m lines
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j;
        }
        for (int z = 1; z <= 2 * i - 1; z++)
        {
            cout << " ";
        }
        for (int k = x; k>=1; k--)
        {
            cout << k;
        }
        cout << endl;
        x--;
    }
}