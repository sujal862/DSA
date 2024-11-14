#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){  //collector
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DLL {  // user define data structure
    public:
    Node* head;
    Node* tail;
    int size;
    DLL (){
        head=tail=NULL;  //empty linked list created where head & tail pointer pointing at NULL
        size =0;
    }

    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size== 0) head = tail = temp; 
        else{
            tail->next=temp;
            temp->prev = tail;   
            tail = temp; //shifted tail at last 
        }
        size++;
    }

    void insertAtBegin(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp;
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
            t->prev = temp;
            t->next->prev = t;
            size++;
        } 
    }

    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty!";
        }
        head = head->next;
        if(head) head->prev = NULL;  //extra
        if(head == NULL) tail = NULL;  //extra
        size--;
    }

    void deleteAtTail(){
        if(size==0){
            cout<<"List is empty!";
        }
        else if(size == 1) {
            deleteAtHead();
            return; 
        }
        Node* temp = tail->prev;
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
            temp->next->prev = temp;
            size--;

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
            if(idx<size/2){
                Node* temp = head;
            for(int i=1;i<=idx;i++){
            temp = temp->next;
            }
            return temp->val;
            }
            else{    //idx>=size/2
                Node* temp = tail;
        for(int i=1;i<size-idx;i++){
            temp = temp->prev;
        }
        return temp->val;
            }
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
    DLL list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    list.insertAtEnd(50);
    list.display();
    list.insertAtIdx(2,25);
    list.display();
    list.deleteAtTail();
    list.display();
    list.deleteAtIdx(3);
    list.display();


}