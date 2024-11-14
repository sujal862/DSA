// Reverse first half
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    cout<<"enter a string of even length: ";
    string str;
    getline(cin,str);  //input 
    int n=str.size();
    reverse(str.begin(),str.begin()+(n/2)); 
    // output
    cout<<str;
}