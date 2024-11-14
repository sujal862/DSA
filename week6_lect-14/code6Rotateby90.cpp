// rotating the matrix by 90 degree
#include <iostream>
using namespace std;
int main()
{
    int m; cout<<"input order of square matrix:"; cin>>m;
    int arr[m][m];
    // input
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
    //swapping 1st,2nd..... and m-1th,m-2th.... column elements
    for(int i=0;i<m;i++){
        for(int j=0,k=m-1;j<k;j++,k--){
                swap(arr[i][j],arr[i][k]);
        }
    }
    cout << endl;
    // print rotated (90degree) matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0;j < m; j++){
            
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
}
