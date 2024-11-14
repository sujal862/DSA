//ALPHABET OR NOT -->ASCII VALUE A TO Z-->> 65 TO 90
//                               a to z -->>97 to 122
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter a character: ";
    cin>>ch;
    int z= (int)ch;
    if((z>=65 && z<=90) || (z>=97 && z<=122))   //4 condiions in two pair
    cout<<"character is a alphabet";
    else
    cout<<"character is not a alphabet";

}

  