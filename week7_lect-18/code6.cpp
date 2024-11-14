#include<iostream>
using namespace std;
int main(){
string arr[] = {"0123","0023","456","00182","940","2901"};
int max= stoi(arr[0]);    //string to integer
for(int i=1;i<6;i++){
    if(max<stoi(arr[i])) max=stoi(arr[i]);
}
//printing index of max
for(int i=0;i<6;i++){
    if(max==stoi(arr[i])){
        cout<<"index of max is: "<<i;
    }
}
}