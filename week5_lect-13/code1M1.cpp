#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>&v){
    int noo=0,noz=0;
    for (int i = 0; i < v.size(); i++){
        if(v[i]==0) { noz++;}
        else noo++;
    }
    //editing vector 'v'
    for (int i = 0; i < v.size(); i++){
        if(i<noz) v[i]=0;    //0 to 3 index tk '0' dal do
        else v[i]=1;
    }
} 
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort01(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}