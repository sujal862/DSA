#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the number of rows : ";
    cin >> n;
    cout << "Enter the number of columns : ";
    cin >> m;
    int a[n][n];
    cout << "Enter the matrix elements : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int maximum = -1000000;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            maximum = max(maximum, a[i][j]);
        }
    }
    cout << "The maximum element in the matrix : " << maximum;
}