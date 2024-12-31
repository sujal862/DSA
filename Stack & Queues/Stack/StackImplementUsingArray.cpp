#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int arr[5];
    int idx;
    Stack(){ //constructor
        idx =-1;
    }

    void push(int x){
        idx++;
        arr[idx]=x;
    }       
    void pop(){
        idx--;
    }
    int top(){
        return arr[idx];
    }
    int size(){
        return idx;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.top();
    st.pop();
    cout<<st.top();

}

