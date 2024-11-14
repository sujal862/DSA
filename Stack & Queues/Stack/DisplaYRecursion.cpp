#include<iostream>
#include<stack>
using namespace std;
void displayrev(stack<int> &st){
    if(st.size()==0) return;
    int x = st.top();
    cout<<st.top()<<" ";
    st.pop();
    displayrev(st);
    st.push(x);
}

void display(stack<int> &st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    displayrev(st);
    cout<<endl;
    display(st);
}