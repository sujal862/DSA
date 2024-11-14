#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter row of  matrix: ";
    cin >> m;
    int n;
    cout << "enter cols of matrix: ";
    cin >> n;
    // input
    int arr[m][n];
    cout << "enter the elements of matrix: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    // print wave form
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0){
            for (int i = m - 1; i >= 0; i--){
                cout << arr[i][j] << " ";
            }
        }
        else{
            for (int i = 0; i < m; i++){
                cout << arr[i][j] << " ";
            }
        }
    }
}
