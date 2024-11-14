#include <iostream>
using namespace std;
int count_Set_Bits1(int n){
    return __builtin_popcount(n);
}

int count_Set_Bits2(int n){
    int count = 0;
    while(n>0){
        count++;
        n = n & n-1;  //in each iteration one setbit will be removed fro n
    }
    return count;
}
 //t.c -> no. od setbits

int main(){
    cout<<count_Set_Bits1(56)<<endl;
    cout<<count_Set_Bits2(56)<<endl;
}