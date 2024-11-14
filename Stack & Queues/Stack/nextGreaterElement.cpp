#include<iostream>
#include<stack>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
   int arr[8]={3,1,2,5,4,6,2,3};
   int n = sizeof(arr)/sizeof(arr[0]);
   display(arr,n);
   //using stack method = pop -> ans mark -> push
   stack<int> st;
   int ans[n];
   ans[n-1]=-1;
   st.push(arr[n-1]);
   for(int i=n-2;i>=0;i--){
    //pop all the elements smaller than a[i]
    while(st.size()>0 && st.top()<=arr[i]) st.pop();  // no. of iteration of this loop = n
    //mark the answer
    if(st.size()==0) ans[i]=-1;
    else ans[i] = st.top();
    //push the arr[i]
    st.push(arr[i]);

   }
    display(ans,n);
}

//s.c -> O(n)
//t.c -> O(n+n) = O(n)
