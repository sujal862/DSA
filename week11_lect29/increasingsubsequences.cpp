#include<iostream>
#include<vector>
using namespace std;
void sub(int orig[],vector<int>ans,int n,int k,int idx){
    if(idx==n){
        if(k==ans.size()){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(ans.size()+(n-idx)<k){return;} //time complexity better ho jaygi
    int x=orig[idx];
    sub(orig,ans,n,k,idx+1);
    ans.push_back(x);
    sub(orig,ans,n,k,idx+1);

}
int main(){
    int orig[]={1,2,3,4,5};
    int n=sizeof(orig)/sizeof(orig[0]);
    vector<int>ans;
    int k=3;
    sub(orig,ans,n,k,0);
}