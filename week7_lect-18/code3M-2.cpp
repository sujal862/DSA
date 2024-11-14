#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="leetcode";
    vector<int> v(26,0);  //26 box having value 0 in each
    int n=s.size();
    for(int i=0;i<n;i++){
        int ascii= int(s[i]);   //ascii value of every charcter
        v[ascii-97]++;   // (ascii-97)->represent index|adding 1 each time in the box representing letter l,e,e,t....
    }
    //max num in v?
    int max=0;
    for(int i=0;i<26;i++){
        if(max<v[i]) {max=v[i]; }
        }
    //finding the max character
    for(int i=0;i<26;i++){
        if(max==v[i]){
         cout<<"character occuring most is: "<<char(i+97)<<endl;   
        }
    }
}