// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string s="abcdef";
//     cout << s.substr(2,3);
// }


// Reverse second half
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;   //even string
    cin>>s;
    int n=s.size();
    cout << s.substr(n/2);
}