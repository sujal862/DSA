#include <iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n=str.size();
    bool flag=true;
    int i=0,j=n-1;
    while(i<=j){
        if (str[i] != str[j] ) {flag=false;}
    i++;
    j--;
    }
    if(flag==true) cout <<"string is a palindrome";
    else cout<<"string is not a palindrome";
}