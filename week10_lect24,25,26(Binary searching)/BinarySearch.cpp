// Binary search
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 4, 9, 10, 23, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 45;
    int lo = 0;
    int hi = size - 1;
    
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        
        if (arr[mid] == target) {
            cout<<mid;
            break;
        } 
        else if (arr[mid] < target) {
            lo = mid + 1;
        } 
        else {
            hi = mid - 1;
        }
    }

}
