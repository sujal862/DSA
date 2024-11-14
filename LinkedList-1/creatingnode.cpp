#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    //constructor creation
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    //forming LL
    a.next = &b;
    b.next = &c;
    c.next = &d;
    //printing  value of b using a
    cout<<(a.next)->val<<endl;
    //printing value of d using a
    cout<<(((a.next)->next)->next)->val;
    cout<<endl;

    //right way using loop
    Node temp=a;
    while(true){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp=*(temp.next);
    }
}