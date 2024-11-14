#include<iostream>
using namespace std;
class Node{  //user defined data type
    public:
    int val;
    Node* next;
    //constructor creation
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
//LL class
class LinkedList{  // user define data structure
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;  //empty linked list created where head & tail pointer pointing at NULL
        size =0;
    }

    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size== 0) head = tail = temp; 
        else{
            tail->next=temp;
            tail = temp; //shifted tail at last 
        }
        size++;
    }

    void insertAtBegin(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head =temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0) insertAtBegin(val);
        else if(idx==size) insertAtEnd(val);
        else{ //inserting in middle
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){ //traversing to idx-1
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next =t;
            size++;
        } 
    }

    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp = head;
        for(int i=1;i<=idx;i++){
            temp = temp->next;
        }
        return temp->val;
        }
    }

    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty!";
        }
        head = head->next;
        size--;
    }

    void deleteAtTail(){
        if(size==0){
            cout<<"List is empty!";
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtIdx(int idx){
        if(size==0){
            cout<<"List is empty!";
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid Index";
            return;
        }
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){ 
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;

        }
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
    LinkedList ll; //{ }-> empty linkedlist
    ll.insertAtEnd(10); //{10->NULL}
    ll.display();
    ll.insertAtEnd(20);//{10->20->NULL}
    ll.display();
    ll.insertAtBegin(5); //{5->10->20->NULL}
    ll.display();
    ll.insertAtBegin(1); //{1->5->10->20->NULL}
    ll.display();
    ll.insertAtIdx(1,2); //{1->2->5->10->20->NULL}
    ll.display();
    cout<<ll.getAtIdx(3)<<endl;
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(1);
    ll.display();

}