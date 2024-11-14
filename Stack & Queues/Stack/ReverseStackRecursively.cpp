#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> &st){
    if(st.size() == 0) return;
    int x = st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}

void pushAtBottom(stack<int> &st, int x){
    if(st.size() == 0){
        st.push(x);
        return;
    }
    int y = st.top();
    st.pop();
    pushAtBottom(st,x);
    st.push(y);
}

void reverse(stack<int> &st){
    if(st.size()==1) return ;
    int x = st.top();
    st.pop();
    reverse(st);
    pushAtBottom(st,x);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    cout<<endl;
    reverse(st);
    display(st);

}

