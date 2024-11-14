// return total number of digits without using loop
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    string s= to_string(n);   // int to string conversion
    int len = s.size();
    cout<<"number of digits: "<<len;
}