#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string str="sujal is learning c++";
    stringstream s(str);
    string temp;

    while(s>>temp){      // taking input word by word from s and storing in temp
        cout<<temp<<endl;
    }
}