#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st){  //bottom to top
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }

    while(temp.size()>0){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
}

void insertAtBottom(stack<int> &st,int x){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(x); // inut at botttom
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}

void insertAtidx(stack<int> &st,int x, int idx){
    stack<int>temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(x);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    print(st);
    insertAtBottom(st,70);
    print(st);
    insertAtidx(st,80,2);
    print(st);
}