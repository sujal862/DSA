#include <iostream>
#include <vector>
using namespace std;
void swap(int* a, int* b){
    int temp= *a;
    *a= *b;
    *b=temp;
    return;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    for (int i = 0; i < v.size(); i++ ) { cout << v[i] << " ";}
    cout << endl;
    // main code
    int lo=0,mid=0,hi=v.size()-1;
    while(mid<=hi){
        if (v[mid]==2){ 
            swap(v[mid],v[hi]);
            hi--;}
        if(v[mid]==0){
            swap(v[mid],v[lo]);
            lo++;
            mid++;
        }    
        if (v[mid]==1) mid++;
        
    }
    for (int i = 0; i < v.size(); i++) { cout << v[i] << " ";}
}