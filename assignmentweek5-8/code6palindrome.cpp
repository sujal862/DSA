#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(4);
    v.push_back(8);
    v.push_back(4);
    v.push_back(6);
    v.push_back(5);
    int x=0,y=v.size()-1;
    bool flag=true;
    for(int i=1;i<=v.size()/2;i++){
        if(v[x]!=v[y]) { flag=false; }    //or can use [ i+j=size-1 ]  concept
        x++;
        y--;
    }
    if(flag==true) { cout << "array is  palindrome ";}    
    else cout << "array is not a  palindrome ";
}

