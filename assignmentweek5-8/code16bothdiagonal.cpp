#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter row of matrix: ";
    cin >> m;
    int n;
    cout << "enter cols of matrix: ";
    cin >> n;
    // input
    int a[m][n];
    cout << "enter the elements of matrix: ";
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    cout<< "elements of both the diagonal are:"<<endl;
    for (int i = 0, k = n - 1; i < m; i++, k--){
        for (int j = 0; j < n; j++){
            if (i == j)  { cout << a[i][j];}
            else if (j == k || i+j==n-1)  cout << a[i][k];
            else   cout << " ";
        }
        cout << endl;
    }
}

/* by me
#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter row of matrix: ";
    cin >> m;
    int n;
    cout << "enter cols of matrix: ";
    cin >> n;
    // input
    int a[m][n];
    cout << "enter the elements of matrix: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout<<endl<<"elements of both the diagonal are:";
    for(int i=0,k=n-1;i<m;i++,k--){
        for(int j=0;j<n;j++){
            if(i==j){cout<<a[i][j];}
            else if(j==k) cout<<a[i][k];    or -> k=n-1-i always
            else cout<<" ";
        }
        cout<<endl;
    }
}
*/