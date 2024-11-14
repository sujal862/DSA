//two pointer 
#include <iostream>
#include <vector>
using namespace std;
sort02(vector<int>&v){
    int i=0,j=v.size()-1;
    while(i<j){
        if(v[j]==1)  j--;   // do nothing let the element go it is on right place
        if(v[i]==0) i++;   //do nothing let the element go it is on right place
        if(i>j) break;     
        if(v[i]==1 && v[j]==0)  {
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    for (int i = 0; i < v.size(); i++){ cout << v[i] << " "; } //print input
    cout << endl;
    sort02(v);
    for (int i = 0; i < v.size(); i++){cout << v[i] << " ";}  //print output
}