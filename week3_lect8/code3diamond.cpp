//DIAMOND
#include <iostream>
using namespace std;

int main(){
    
  //jugar code  combination of code 19 and code 23 of assigment
    int n;
    cout << "ENTER n:";
    cin>>n;

    int x = n - 1;
    int a = n - 1;

    for (int i = 1; i <= n; i++)
    {
        // upper triangle space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // upper triangle stars
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    for (int z = 1; z <= n - 1; z++)
    {
        // lower triangle space
        for (int p = 1; p <= z; p++)
        {
            cout << " ";
        }

        // lower triangle stars
        for (int y = x; y >= 1; y--)
        {
            cout << "* ";
        }
        cout << endl;
        x = x - 1;
    }
}





