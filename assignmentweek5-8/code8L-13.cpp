// Triplet
#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int x; cout<<"enter x: ";  cin>>x;
    int n=sizeof(a)/4;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
            if(a[i]+a[j]+a[k]==x){
                count++;
            }
            }
        }
    }
    cout << "number of triplets whose sum is " << x << " is: " << count;
}

