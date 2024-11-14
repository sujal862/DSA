#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);
    int x;
    cout<<"enter target sum x: ";
    cin>>x;
    //doblet search
    for(int i=0;i<=v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){ cout<<"doublet indices: "<<i<<","<<j<<endl;}
        }
    }
}