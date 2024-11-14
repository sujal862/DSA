#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,2,3,3,3,3,3,4,4,5,8,9};
    int size =sizeof(arr)/4;
    int target = 3;
    int lo = 0;
    int hi = size - 1;
    bool flag=false;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        
        if (arr[mid] == target) {
            if(arr[mid+1]!=target){
                cout<<mid;
                flag=true;
                break;
            }
            else {
            lo=mid+1;
            }
        } 
        else if (arr[mid] < target) {
            lo = mid + 1;
        } 
        else {
            hi = mid - 1;
        }
    }
    if(flag==false) cout<<-1; 

}
