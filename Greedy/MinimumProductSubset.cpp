#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int minProduct(vector<int> &arr){
    int cz = 0, cn = 0, cp = 0;
    int prod_pos = 1;
    int prod_neg = 1;
    int largestnegative = INT_MIN;
    for (int i = 0; i < arr.size(); i++){
        if(arr[i] == 0) cz++;
        if(arr[i] > 0) {
            cp ++;
            prod_pos *= arr[i];
        }
        if(arr[i] < 0){
            cn ++;
            prod_neg *= arr[i];
            largestnegative = max(largestnegative, arr[i]);
        }
    }
    if(cn == 0){ //No negative
        if(cz > 0) return 0;
        else { //only positive
            auto it = min_element(arr.begin(), arr.end());
            return *it;
        }
    } else { //negative present
        if (cn % 2 ==0){
            // even
            return (prod_neg/largestnegative) * prod_pos;
        } else {
            //odd
           return prod_neg * prod_pos;
        }
        
    }
}



int main() {
    vector<int> arr {-2, -3, 1, 4, -2};
    cout<<minProduct(arr)<<"\n";
}