#include <iostream>
using namespace std;
int main(){
     int arr[5][5];
     //storing 10 in each index
     for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           arr[i][j]=10;
        }
     }
      // print output
     for (int i = 0; i < 5; i++)
     {
        for (int j = 0; j < 5; j++)
        {
           cout << arr[i][j]<<" ";
        }
        cout << endl;
     }
}