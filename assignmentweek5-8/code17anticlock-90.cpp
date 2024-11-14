// rotating the matrix by 90 degree
#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "input order of square matrix: ";
    cin >> m;
    int arr[m][m];
    // input
    cout<<"enter the matrix elements";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    // storing the transpose in arr itself
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    // swapping 1st,2nd..... and m-1th,m-2th.... row elements
    for (int j = 0; j < m; j++)    //j-> column
    {
        for (int i = 0, k = m - 1; i < k; i++, k--)   // i,k-> row
        {
            swap(arr[i][j], arr[k][j]);
        }
    }
    cout << endl;
    // print rotated (90degree) matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
