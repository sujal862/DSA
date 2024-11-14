#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n=str.size();
    int count = 0;
    for (int i = 0; i < n; i++){
        if(n==0){
            break;
        }
        if(i==0){                            //first char check right only
            if(str[i]!=str[i+1]){ count++;}  }
        else if(i==n-1){                        // last char check left only
            if (str[i] !=str[i-1]) {   count++;}  }
        else if (str[i]!=str[i-1] && str[i]!=str[i+1]){  //both side should be diff than only count ++
            count++;
        }
    }
    cout << count;
}