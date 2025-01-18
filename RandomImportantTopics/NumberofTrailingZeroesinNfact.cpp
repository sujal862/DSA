#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int> res;
    res.push_back(1);
    for(int x=2;x<=n;x++){
        int car=0;
        for(int i=0;i<res.size();i++){
            int val=res[i]*x+car;
            res[i]=val%10;
            car=val/10;
        }
        while(car!=0){
            res.push_back(car%10);
            car/=10;
        }
    }
    reverse(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        cout<<res[i];
    }
    cout<<endl;
    int s=res.size();
    //no. of trailing zeroes
    int count =0;
    for(int i=s-1;i>=0;i--){
        if(res[i]==0){count++;}
        else break;
    }
    
    cout<<"No of Trailing Zeres: "<<count;
}
}