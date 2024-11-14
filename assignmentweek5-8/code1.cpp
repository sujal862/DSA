#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(7);
    v.push_back(10);
    v.push_back(5);
    v.push_back(3);
    v.push_back(9);
    int x;
    cout<<"enter x: ";
    cin>>x;
    int count=0;
    for(int i=0;i<=v.size();i++){
        if(v[i]>x) count=count+1;
    }
    cout<<"num greater than x:"<<count;
}