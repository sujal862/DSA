#include<iostream>
#include<stack>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int arr[]={100,80,60,81,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    stack<int> st;  // store index of pge(previous greatest element)
    st.push(0);
    int ans[n];
    ans[0]=1;
    for(int i=1;i<n;i++){
        while(st.size()>0 && arr[st.top()]<arr[i]) st.pop();
        if(st.size()==0) ans[i] =i+1;  // stack->empty i.e arr[i] is greatest
        else ans[i] = i-st.top();
        st.push(i);
    }
    display(ans,n);

}
