#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"marks of a: ";
    cin>>a;
    cout << "marks of b: ";
    cin >> b;
    cout << "marks of c: ";
    cin >> c;
    if (a<b && a<c)
    cout<<"'a' has the least marks ";
    if (b < a && b < c)
    cout << "'b' has the least marks ";
    if (c < b && c < a)
    cout << "'c' has the least marks ";
    
}