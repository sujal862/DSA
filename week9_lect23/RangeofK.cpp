#include<iostream>
#include<algorithm>
using namespace std;
float max(float a, float b){
    if(a>b) return a;
    else return b;
}
float min(float a , float b){
    if(a<b) return a;
    else return b;
}
int main(){
    int a[]={5,2,10,};
    int n=size(a);
    float kmax=(float)(INT_MAX);
    float kmin=(float)(INT_MIN);
    bool flag=true;
    for(int i=1;i<n;i++){
        if(a[i-1]>=a[i]){
            kmin=max(kmin,(a[i]+a[i-1])/2.0);  //max compares only same data type values 
        }
        else{
            kmax=min(kmax,(a[i]+a[i-1])/2.0);
        }
        if(kmin>kmax){   //case of non existence of such value of k that can be subtracted to make array sorted.
            flag=false;
            break;
        }
    }
    if(flag==false){ cout<<-1;}
    else if(kmin==kmax){
        if(kmin-(int)kmin==0){  // i.e kmin and kmax are integers
            cout<<"There is only one value of k:"<<kmin;
        }
        else cout<< -1;
    }
    else{
    if(kmin-(int)kmin>0){
        kmin=(int)kmin+1;
    }
    cout<<"Range of K is: "<<"["<<kmin<<","<<(int)kmax<<"]";
    }
    
}