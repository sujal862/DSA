// row having maximum sum
#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n=3,m=3;
    int a[n][m];
    cout << "Enter the matrix elements : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    // suming each row
    int rownum;
    int max =INT_MIN;
    for (int i = 0; i < n; i++){
        int sum=0;
        for (int j = 0; j < m; j++)
        {
           sum=sum+a[i][j];
        }
           if(max<sum){ 
            max=sum;
           rownum=i;
           }
    }
    cout << "The row having the maximum sum of element is : " <<rownum <<" i.e "<<max;
}