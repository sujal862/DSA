//Manual Implementation
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

void displayrec(Node* head){
    if(head == NULL) return;
    
    cout<<head->val<<" ";
    displayrec(head->next);
}
void InsertAtEnd(Node* head,int val){
    Node* t = new Node(val);
    while(head->next != NULL){
        head = head->next;
    }
    head->next = t;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;

    // // //printing value of d
    // // cout<<a->next->next->next->val;
    
    // //display all values
    // display(a);

    // //display recursively
    // displayrec(a);

    //insertatend
    InsertAtEnd(a,50);
    display(a);

}