#include<iostream>
#include<stack>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next = next;
    }
};
class Stack{
    public:
    int size;
    Node* head;
    Stack(){
        head = NULL;
        size = 0;
    }
    void push(int val){
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
    size++;
    }
    void pop(){
        if(size == 0){
            cout<<"sack is empty"<<endl;
            return ;
        }
        head = head->next;
        size--;
    }
    int top(){
        if(size == 0){
            cout<<"sack is empty"<<endl;
            return -1;
        }
        return head->val;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.size<<endl;
    st.display();

}

