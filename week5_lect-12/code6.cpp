#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a){
     for(int i=0;i<=a.size()-1;i++){
        cout<<a[i]<<" ";       
}
}
int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(1);
    v1.push_back(6);
    display(v1);  cout<<endl;
    vector<int>v2(v1.size());  //reverse 

    for(int i=0;i<=v2.size()-1;i++){
        int j=v2.size()-1-i;  // i+j= size-1
        v2[i]=v1[j];   // insering elements in reverse order in v2 from v1
    }
    display(v2);
    
}