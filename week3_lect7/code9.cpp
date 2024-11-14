#include <iostream>
using namespace std;
int main() 
{
int n;
cout << "Enter n(odd): ";
cin >> n;
int x = n, store = 1;

for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= n; j++)
    {
        if (j==store || j==x ){
            cout << "*";}
        else{
            cout << " ";}
    }
    cout << endl;
    x=x-1;
    store=store+1;
    
}
}

