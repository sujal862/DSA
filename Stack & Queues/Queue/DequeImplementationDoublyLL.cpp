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

class Deque {  // user define data structure
    public:
    Node* head;
    Node* tail;
    int s;
    Deque (){
        head=tail=NULL;  //empty linked list created where head & tail pointer pointing at NULL
        s =0;
    }

    void PushBack(int val){
        Node* temp = new Node(val);
        if(s== 0) head = tail = temp; 
        else{
            tail->next=temp;
            temp->prev = tail;   
            tail = temp; //shifted tail at last 
        }
        s++;
    }

    void PushFront(int val){
        Node* temp = new Node(val);
        if(s==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp;
            head =temp;
        }
        s++;
    }

    void PopFront(){
        if(s==0){
            cout<<"List is empty!";
        }
        head = head->next;
        if(head) head->prev = NULL;  //extra
        if(head == NULL) tail = NULL;  //extra
        s--;
    }

    void PopBack(){
        if(s==0){
            cout<<"List is empty!";
        }
        else if(s == 1) {
            PopFront();
            return; 
        }
        Node* temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        s--;
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    int front(){
         if(s==0){
            cout<<"Queue is empty!";
            return -1;
        }
        return head->val; 
    }

    int back(){
         if(s==0){
            cout<<"Queue is empty!";
            return -1;
        }
        return tail->val;
    }

    int size(){
        return s;
    }

    bool empty(){
        if(s==0) return true;
        else return false;
    }

};

int main(){
    Deque dq;
    dq.PushBack(10);
    dq.PushBack(20);
    dq.PushBack(30);
    dq.PushBack(40);
    dq.display();
    dq.PushFront(50);
    dq.PushFront(60);
    dq.PushFront(70);
    dq.PushFront(80);
    dq.display();
    dq.PopBack();
    dq.PopFront();
    dq.display();
    cout<<dq.front()<<" "<<dq.back();
}