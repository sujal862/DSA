#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string strs[]={"dog","racecar","car"};
    vector<string>str;
    str.push_back("dog");
    str.push_back("racecar");
    str.push_back("car");
    sort(str.begin(),str.end());
    for(int i=0;i<sizeof(str);i++){
        cout<<str[i]<<endl;
    }

}