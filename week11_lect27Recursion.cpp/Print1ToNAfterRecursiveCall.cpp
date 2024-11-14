#include<iostream>
using namespace std;
void print(int n){
   if(n==0) return;
    print(n-1);  //recursive call
    cout<<n<<endl;
}
int main(){
    print(10);   
}