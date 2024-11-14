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
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int size(Node* head){
    Node* temp = head;
    int n=0;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    return n;
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    
    //display all values
    display(a);

    //size of LL
    cout<<size(a);
}