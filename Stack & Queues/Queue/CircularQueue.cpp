#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
    vector<int>arr;
    int b;
    int f;
    int s;
    Queue(int x){  //constructor
        s = 0;
        b=f=0;
        vector<int> v(x);
        arr = v; //copy the v into arr
    }

    void push(int val){
        if(s==arr.size()){
            cout<<"queue is full"<<endl;
            return;
        }
        arr[b]=val;
        b++;
        if(b==arr.size()) b=0;
        s++;
    }

    void pop(){
        if(s==0) {
            cout<<"queue is empty"<<endl;
            return;
        }
        f++;
        if(f==arr.size()) f =0;
        s--;
    }

    int size(){
        return s;
    }

    int front(){
        if(s==0) {
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[f];
    }

    int back(){
        if(s==0) {
            cout<<"queue is empty"<<endl;
            return -1;
        }
        if(b==0) return arr[arr.size()-1];
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