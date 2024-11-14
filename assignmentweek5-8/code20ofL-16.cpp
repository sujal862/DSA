#include<iostream>
using namespace std;
int main(){
    // input
    int a[3][3]={1,0,1,1,1,0,0,2,3};
    int b[3][3] = {1, 0, 1, 1, 1, 0, 0, 2, 3};
    int m=3;
    int n=3;
    //search
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==0){
                for(int k=0;k<n;k++){
                    b[i][k]=0;    // making row=0
                }
                for (int k = 0; k < m; k++){
                    b[k][j] = 0;  //making column=0
                }
            }
        }
    }
    cout<<endl;
    //output
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}