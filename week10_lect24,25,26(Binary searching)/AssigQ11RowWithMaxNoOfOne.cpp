//Row with Max number of one
#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={{0,1, 1, 1},{0, 0, 1, 1},{1, 1, 1, 1},{0, 0, 0, 0}};  //sorted binary array so 1 will always be in last index
    int r = 4;
    int c = 4;
    int target=1;
    int max=-1;
    int maxr=0;

    for(int i=0;i<r;i++){
    int lo=0,hi=c-1,firstindx=-1;
    int countOnes=0;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[i][mid]==target){
            if(mid==0){
                firstindx=mid;
                break;
            }
            else if(arr[i][mid-1]!=target){
                firstindx=mid;  
                break;
            }
            else{
                hi=mid-1;
            }
        }
        else if(arr[i][mid]<target){lo=mid+1;}
        else if(arr[i][mid]>target){hi=mid-1;}
    }
    if(firstindx!=-1) countOnes=c-firstindx;
        if(max<countOnes){
        max=countOnes;
        maxr=i;
        }
    }
    cout<<maxr<<" "<<max;
}