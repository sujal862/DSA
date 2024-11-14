#include <iostream>
using namespace std;
int main(){
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
    cout<<endl;
    // print wave form
    for (int i = 0; i < m; i++){
        if(i%2==0){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
