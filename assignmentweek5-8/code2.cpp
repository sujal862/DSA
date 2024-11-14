#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
    v.push_back(10);
    v.push_back(25);
    v.push_back(3);
    v.push_back(9);
    v.push_back(4);
    int max=INT_MIN;     //INT_MIN represents smallest integer ever
    for(int i=0;i<=v.size()-1;i++){
        if(max<v[i]) max=v[i];
    }
    int smax=INT_MIN;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]!=max && smax<v[i])  smax=v[i];
    }
    int tmax = INT_MIN;
    for (int i = 0; i < v.size() - 1; i++){
        if (v[i]!=max && v[i]!=smax && tmax < v[i])   tmax = v[i];
    }
        cout << "1st max: " << max<<endl;
        cout << "2nd max: " << smax<<endl;
        cout << "3rd max: " << tmax;
    }