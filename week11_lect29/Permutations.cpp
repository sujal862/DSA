#include<iostream>
using namespace std;
void sub(string orig,string ans){
    if(orig==""){
        cout<<ans<<endl;
        return;
    }
    int x=0;
    while(x<orig.length()){
        char ch=orig[x];
        string left=orig.substr(0,x);
        string right=orig.substr(x+1);
        sub(left+right,ans+ch);
        x++;
    }
}
int main(){
    string orig="abc";
    sub(orig,"");
}