#include <iostream>
using namespace std;
int main()
{                                       //M-2 down
    int n;
    cout << "enter n0. of rows: ";
    cin >> n;
    int x=n-1;
    for (int i = 1; i <= n+1; i++)
    {    //PRINTING UPPER TRIANGLE
         if(i<=n){
        for (int j = 1; j <= i; j++)
        {cout<<"*";
        }
    }     //PRINTING LOWER TRIANGLE  (copy of lower triangle code)
        if(i>n){ 
            for(int z=1;z<=x;z++){
            for(int k=1;k<=x+1-z;k++){
                cout<<"*";
            }
            cout<<endl;
            } 
        }
        cout<<endl;
    }
}

/*  or
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n0. of rows: ";
    cin >> n;
    int x = n - 1;
    for (int i = 1; i <= n; i++)
    {     // PRINTING UPPER TRIANGLE
        for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout<<endl;
    }
        // PRINTING LOWER TRIANGLE  (copy of lower triangle code)

            for (int z = x; z >= 1; z--)
            {
                for (int k = 1; k <=z; k++)
                {
                    cout << "*";
                }
                cout << endl;
            }
    }
*/