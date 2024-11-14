#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
    vector<int>arr;
    int b;
    int f;
    Queue(int size){  //constructor
        b=f=0;
        vector<int> v(size);
        arr = v; //copy the v into arr
    }

    void push(int val){
        if(b==arr.size()){
            cout<<"queue is full"<<endl;
            return;
        }
        arr[b]=val;
        b++;
    }

    void pop(){
        if(f-b==0) {
            cout<<"queue is empty"<<endl;
            return;
        }
        f++;
    }

    int size(){
        return b-f;
    }

    int front(){
        if(f-b==0) {
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[f];
    }

    int back(){
        if(f-b==0) {
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.pop();
    q.display();
    cout<<q.back()<<endl;
    cout<<q.size();
}