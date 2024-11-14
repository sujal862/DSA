#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    for(int i=0;i<n;i++){
        if(i%2==0)  str[i]='a';
    }
    //output
    for (int i = 0; i < n; i++)
    {
        cout<<str[i];
    }
}