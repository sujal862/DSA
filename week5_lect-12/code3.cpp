#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    int x;
    for(int i=1;i<5;i++){
        cin>>x;
        v.push_back(x);
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<v[i]<<" ";
    }
}