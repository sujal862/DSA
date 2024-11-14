#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter row of first matrix: ";
    cin>>m;
    int n;
    cout << "enter cols of first matrix: ";
    cin >> n;

    int p;
    cout << "enter row of second matrix: ";
    cin >> p;
    int q;
    cout << "enter cols of second matrix: ";
    cin >> q;
    if(n==p){
        //input
        int a[m][n];
        cout<<"enter the elements of 1st matrix: ";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout << "enter the elements of 2nd matrix: ";
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
        }
        //resultant multiplied matrix (main code)
        int res[m][q];
        for(int i=0;i<m;i++){
        for (int j=0;j<q;j++){
            int sum=0;
            for(int r=0;r<n;r++){
            sum+=a[i][r]*b[r][j];
        }
        res[i][j]=sum;
        }
    }
    //print output
    cout<<"multiplication of 1st and 2nd matrix is: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else { cout<<"The matrix cannot be multiplied"; }
}