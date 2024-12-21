#include <iostream>
using namespace std;

class MinHeap{
    public:
    int arr[50];
    int idx;
    MinHeap(){
        idx = 1;
    }
    int top(){
        return arr[1];
    }

    void push(int x){
        arr[idx] = x;  //push 
        int i = idx;
        idx++;
        //swapping i with parent til i==1
        while(i!=1){
            int parent = i/2;
            if(arr[i]<arr[parent]) swap(arr[i], arr[parent]);
            else break;
            i = parent;
        }
    }

    int size(){
        return idx-1;
    }

    void pop(){
        idx--; //since idx-1 is always size so place the idx at last of heap
        arr[1] = arr[idx];  //place the last ele at top (now pop is done)(now size = idx-1 bec the ele at idx is now placed at top so no use of idx th ele)
        //Reaarangement of top ele at right place
        int i =1 ;
        while(true) {
            int left = 2*i , right = 2*i+1;
            //if child are greater than size
            if(left > idx-1) break;
            if(right > idx-1){
                if(arr[i] > arr[left]){
                    swap(arr[i],arr[left]);
                    i = left;
                }
                break;
            }

            //i ko apna smallest child sa swap krdo
            if(arr[left]<arr[right]){
                if(arr[left]<arr[i]){
                    swap(arr[i],arr[left]);
                    i = left;
                }
                else break;
            }
            else{  //(arr[left]>arr[right])
                if(arr[right]<arr[i]){
                    swap(arr[i],arr[right]);
                    i = right;
                }
                else break;
            }
        }
    }

    void display(){
        for(int i=1;i<=idx-1;i++){
                cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    MinHeap pq;    //constructor call isa bhi hota hai //  pq is from 1 to indx-1
    pq.push(10);
    pq.push(20);
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.push(21);
    pq.push(2);
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.display();
    pq.pop();
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.display();

}