#include<iostream>
using namespace std;
int square(int x){
    return x*x;
}
int func(int n){
for(int i=1;i<=n;i++){
        cout<<i<<" "<<square(i)<<endl;
    }
}
int main (){
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<func(n);
}