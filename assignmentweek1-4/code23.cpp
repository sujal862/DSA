#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER n:";
    cin >> n;
    int x=n-1;
    for (int i = 1; i <= n; i++)
    {         //upper triangle space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }      //upper triangle stars
        for(int k=1;k<=i;k++)  {
            cout<<"*";
        }
        cout << endl;
    }
    for(int z=1;z<=n-1;z++)
    {       // lower triangle space
        for(int p=1;p<=z;p++){
            cout<<" ";
        }    //lower triangle stars
        for(int y=1;y<=n-z;y++){
            cout<<"*";
        }
        cout<<endl;
    }
}