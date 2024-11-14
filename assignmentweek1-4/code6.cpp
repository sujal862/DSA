#include <iostream>
using namespace std;
int main()
{
char ch;
cout << "enter a character: ";
cin >> ch;
int z = (int)ch;
if ((z >= 65 && z <= 90) || (z >= 97 && z <= 122)) 
    cout << "character is a alphabet";
else {
    if( z>=48 && z<=57){
    cout << "character is a number";}
    else {
    cout<<" character is a special character";}
}
}