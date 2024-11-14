#include <iostream>
using namespace std;
int main(){
    int m=3;   //odd order square matrix
    int arr[m][m];
    cout << "enter the matrix:";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    // output
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++){
            if (i==m/2 || j==m/2){ cout << arr[i][j]<<" "; }
            else cout<<"  ";
        }
        cout << endl;
    }
}