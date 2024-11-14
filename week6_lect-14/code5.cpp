// transpose and store the matrix in same matrix
#include <iostream>
using namespace std;
int main()
{
    int arr[3][3];
    // input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // storing the transpose in arr itself
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++)  
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    cout << endl;
    // print transpose matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
