#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>&q){
    for(int i=1;i<=q.size();i++){
    int x = q.front();
    cout<<x<<" ";
    q.pop();
    q.push(x);
    }
    cout<<endl;
}

void reverseK(queue<int>& q,int k){
    stack<int>st;
    int n = q.size();
    //push k ele from front into stack
    for(int i=1;i<=k;i++){
        st.push(q.front());
        q.pop();
    }
    //push k ele from stack to queue at back
    for(int i=1;i<=k;i++){
        q.push(st.top());
        st.pop();
    }
    //push n-k ele from FRONT TO BACK
    for(int i=1;i<=n-k;i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    reverseK(q,4);
    display(q);
}