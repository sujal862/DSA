#include<iostream>
using namespace std;
string cipher(string s,int n){
    string p="";
    for(int i=0;i<s.size();i++){
        p=p + (char)((((int)s[i] -65 + n) % 26) + 65);
    }
    return p;
}
int main(){
    int n;
    string s;
    cin>>s>>n;
    cout<<cipher(s,n);

}