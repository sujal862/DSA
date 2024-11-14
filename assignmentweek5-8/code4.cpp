#include <iostream>
using namespace std;
int main(){
    int arr[6]={3,5,7,8,12,9};
    int even=0,odd=0;
    for(int i=0;i<=5;i++){
        if(i%2==0) { even=even+arr[i]; }
        else odd=odd+arr[i];
    }
    cout << "difference b/w sum of even-odd:"<<even-odd;
}
