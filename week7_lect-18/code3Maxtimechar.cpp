#include <iostream>
#include <climits>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n= s.size();
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        int count=1;   //ak bar to garanty aa hi rha ha (think)
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(max<count) max=count;
    }
    //character finding
    for (int i = 0; i < n; i++){
        int count = 1;
        for (int j = i + 1; j < n; j++){
            if (s[i] == s[j]){
                count++;
            }
        }
        if (count==max){
            cout<<"max occuring character is: "<<s[i]<<" : "<<max<<endl;
        }
    }
} 