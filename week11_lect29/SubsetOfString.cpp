#include<iostream>
using namespace std;
void subset(string ans, string original){
    if(original.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=original[0];
    subset(ans+ch,original.substr(1));
    subset(ans,original.substr(1));
}
int main(){
    string str ="abc";
    subset("",str);
}
