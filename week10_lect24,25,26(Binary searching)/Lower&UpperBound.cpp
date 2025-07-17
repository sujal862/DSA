// // lower bound  by me
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 4, 5, 6, 9};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target = 5 ;
//     int lo = 0;
//     int hi = size - 1;
    
//     while (lo <= hi) {
//         int mid = lo + (hi - lo) / 2;
        
//         if (arr[mid] == target) {
//             cout<<arr[mid-1];
//             break;
//         } 
//         else if (arr[mid] < target) {
//             if(arr[mid]<target && arr[mid+1]>target){
//             cout<<arr[mid];
//             break;
//             }
//             else lo=mid+1;
//         } 
//         else {
//             hi = mid - 1;
//         }
//     }

// }


//or
//lower bound
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2,4,5,9,15,18,21,24};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 20;
    int lo = 0;
    int hi = n - 1;
    int ans = n; //if target is greater than largest ele in arr tha lb = n;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        
        if (arr[mid] >= target) {
            ans = min(ans, mid);
            hi = mid-1;
        } 
        else {
            lo = mid + 1;
        }
    }
    cout<<ans;
}




// //Upper Bound
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2,4,5,9,15,18,21,24};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target = 20;
//     int lo = 0;
//     int hi = n - 1;
//     int ans = n; //if target is greater than largest ele in arr tha lb = n;
//     while (lo <= hi) {
//         int mid = lo + (hi - lo) / 2;
        
//         if (arr[mid] > target) {
//             ans = min(ans, mid);
//             hi = mid-1;
//         } 
//         else {
//             lo = mid + 1;
//         }
//     }
//     cout<<ans;
// }

