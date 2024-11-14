#include<iostream>
using namespace std;
int fact(int a){
    if(a==1) return 1;  //base case
    int f= a * fact(a-1);
    return f;

}
int main(){
    int n;
    cout<<fact(5);
}