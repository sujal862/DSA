#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int a=1;
    int b=2*n-1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=2*n-1; j++)
        {
          if(j==a || j==b) cout <<"*";  
          else cout<<" ";
        }
        cout << endl;
        a++;
        b--;
    }
}