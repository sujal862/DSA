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

void reorder(queue<int>&q){
    stack<int>st;
    int n = q.size();
    //push 1st half from q to st
    while(q.size()!=n/2){
        st.push(q.front());
        q.pop();
    }
    //push from st to q
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    // push currnt 1st half from q to st
    while(q.size()!=n/2){
        st.push(q.front());
        q.pop();
    }
    //IMP -> st to q and q to q alternate (interleave one by one)
    while(!st.empty()){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    //reverse queue
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    reorder(q);
    display(q);
}