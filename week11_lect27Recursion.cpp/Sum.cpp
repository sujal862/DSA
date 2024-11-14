//ParameterisedMethod
// #include<iostream>
// using namespace std;
// void SUM1toN(int sum , int n){
//     if(n==0){
//         cout<<sum;
//         return;
//     }
//     SUM1toN(sum + n , n-1);
// }
// int main(){
//     SUM1toN(0,4);
// }



//Sun Return Type

#include<iostream>
using namespace std;
int SUM(int n){
    if(n==1) return 1;
    return n + SUM(n-1);
}
int main(){
    cout<<SUM(10); 
}