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
//queue class
class Queue{  
    public:
    Node* head;
    Node* tail;
    int s;
    Queue(){
        head=tail=NULL;  //empty queue list created where head & tail pointer pointing at NULL
        s =0;
    }

    void push(int val){
        Node* temp = new Node(val);
        if(s== 0) head = tail = temp; 
        else{
            tail->next=temp;
            tail = temp; //shifted tail at last 
        }
        s++;
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

    void pop(){
        if(s==0){
            cout<<"Queue is empty!";
        }
        Node* temp = head;
        head = head->next;
        s--;
        delete(temp); //to prevent wasteage of size delete the node in actual from memory after pop
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
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
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    cout<<q.size()<<endl;
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back();
}