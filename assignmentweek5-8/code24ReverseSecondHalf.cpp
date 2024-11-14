// Reverse second half
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    cout << "enter a string of even length: ";
    string str;
    cin>>str;
    int n = str.size();
    reverse(str.begin()+n/2, str.end());
    // output
    cout << str;
}