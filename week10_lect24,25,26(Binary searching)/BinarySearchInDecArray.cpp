// Binary search
#include <iostream>
using namespace std;

int main() {
    int arr[] = {6,5,4,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;
    int lo = 0;
    int hi = size - 1;
    
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        
        if (arr[mid] == target) {
            cout<<mid;
            break;
        } 
        else if (arr[mid] < target) {
            
            hi = mid - 1;
        } 
        else {
            lo = mid + 1;
        }
    }

}
