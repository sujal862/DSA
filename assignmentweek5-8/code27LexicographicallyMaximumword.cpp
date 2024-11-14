//sorting not allowed (if was alowed 2 line solution hojata)
#include <iostream>
#include <vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str="proud to be pwians";
    stringstream s(str);
    string temp;
    vector<string>v;   
    while(s>>temp){
    v.push_back(temp);
    }
    int count=0;
    int max=0;
    for(int i=0;i<v.size();i++){
        if(max<v[i][0]) max=v[i][0];  //auto ascii value compare
    }
    for (int i = 0; i < v.size(); i++){
        if (max ==v[i][0]){
            cout<<v[i];
        }     
    }
}
