#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter a character: ";
    cin >> ch;
    int z = (int)ch;
    if ((z >= 65 && z <= 90) || (z >= 97 && z <= 122)){
        if (ch== 'a' || ch == 'e' || ch == 'i' || z == 'o' || z == 'u' || z == 'A' || z == 'E' || z == 'I' || z == 'O' || z == 'U'){
            cout << "character is a vowel";}
            else {
                cout<<"character is consonant";
            }
    }
        else
            cout << "character is not a alphabet";
}
