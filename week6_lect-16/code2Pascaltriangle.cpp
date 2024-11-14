#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m;
    cout<<"numrows: ";
    cin>>m;
    vector< vector<int> >v;
    for(int i=1;i<=m;i++){
        vector<int>a(i);  
        v.push_back(a);   //m times 'a' vector will get push into 2d vector(v) of size i
    }
    // pascal triangle generation
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || i==j) {v[i][j]=1; }   //all row's last and first element is 1 
            else { v[i][j]= v[i-1][j] + v[i-1][j-1] ; }
        }
    }
    //print output
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}