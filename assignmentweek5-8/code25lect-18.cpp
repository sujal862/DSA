#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string temp=s;
    //reverse
    int i=0,j=s.size()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
}
s=temp+s;
cout<<s;
}