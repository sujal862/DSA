#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter num. of row: ";
    cin>>m;
    cout << "enter num. of column: ";
    cin >> n;
    int arr[m][n]={1,2,3,4,5,6,7,8,9};
    int tran[n][m];       //order: m,n -> n,m
    // input 
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //storing the transverse
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            tran[i][j]= arr[j][i];
        }
    }
    cout<<endl;
    //print transpose matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << tran[i][j] << " ";
        }
        cout << endl;
    }
}