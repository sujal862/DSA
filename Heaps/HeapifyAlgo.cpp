#include <iostream> //converting array into minHeap array
using namespace std;

void print(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
}

//Heapify Algo
void heapify(int i, int arr[], int n){
    while(true){
    int left = 2*i, right = 2*i+1;
    //check for existence of left and right
    if(left >= n) break;
    if(right >= n){
        if(arr[left] < arr[i]){
            swap(arr[left],arr[i]);
            i = left;
        }
        break;;
    }
        if(arr[left] < arr[right]){
            if(arr[left] < arr[i]){
                swap(arr[left], arr[i]);
                i = left;
            }
            else break;;
        }
        else {
            if(arr[right] < arr[i]){
                swap(arr[right], arr[i]);
                i = right;
            }
            else break;
        }
    }
}

int main()
{
    int arr[] = {-1, 10, 2, 14, 11, 1, 4}; //0 idx is ignored here
    int n = sizeof(arr) / 4;
    print(arr, n);
    for (int i = n / 2; i > 0; i--) {
        heapify(i, arr, n);
    }
    print(arr, n);
}