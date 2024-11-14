//ROTATION
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i <= a.size() - 1; i++)
    {
        cout << a[i] << " ";
    }
}
void reversepart(int i,int j, vector<int> &v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;  
    }
    return;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);
    display(v);
    cout<<endl;
    int k;
    cout<<"enter steps to rotate :";
    cin>>k;     // if k=2
    if(k>7) { k=k%7;  }   //because if k=7 the array gets full rotate and looks as original
      //rotation              
    int n= v.size();    //n=7
    reversepart(0,n-1-k,v); 
    reversepart(n-k,n-1,v);  //now completly changed vector v= 7,3,2,6,1,8,4
    reversepart(0,n-1,v);  //full reverse the above vector = output
    display(v);
}
