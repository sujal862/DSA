#include<iostream>
using namespace std;
void fun(int n){
   if(n==0) return;
    cout<<n<<endl;
    return fun(n-1);
}
int main(){
    fun(10);
}