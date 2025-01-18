#include<iostream>
using namespace std;
bool validnum(int num){
     bool flag=true;
while(num>0){
    int x=num%10;  //got last num
    if(x==2 || x==4){
        flag=false;  //not valid num
    }
    num/=10;
    }
    return flag;
}
int kthnumber(int k){
    int count=0,num=1;
    //check loop
    while(true){
        bool f=validnum(num);
        if(f==true){
            count++;  //on getting everytime a valid number count it
        }
        if(k==count){
        return num;
        }
        num++;
    }
}
int main(){
    int k;
    cout<<"k:";
    cin>>k;
    int result=kthnumber(k);
    cout<<result;
}