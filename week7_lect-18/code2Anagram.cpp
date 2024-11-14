#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s= "physicswallah";
    string t= "wallahphysics";
    sort (s.begin(),s.end());
    sort(t.begin(), t.end());
    if(s==t){    //string can be compared like this
        cout<<"true";
    }
    else cout<<"false";
}