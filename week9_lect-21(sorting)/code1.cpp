#include<iostream>
using namespace std;
int main(){
  int arr[6]={5,4,6,3,2,1};
  int n=size(arr);
  for(int i=0;i<n-1;i++){//n-1 passes
    for(int j=0;j<n-1;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      } 
    }
  }
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
}


//2nd optimized code
// #include<iostream>
// using namespace std;
// int main(){
//   int arr[6]={5,4,6,3,2,1};
//   int n=size(arr);
//   for(int i=0;i<n-1;i++){//n-1 passes
//     for(int j=0;j<n-i-1;j++){
//       if(arr[j]>arr[j+1]){
//         swap(arr[j],arr[j+1]);
//       } 
//     }
//   }
//   for(int i=0;i<n;i++){
//     cout<<arr[i];
//   }
// }




// //3rd most Optimize code  (Best code)
// #include<iostream>
// using namespace std;
// int main(){
//   int arr[6]={5,4,6,3,2,1};
//   int n=size(arr);
//   bool flag=true;
//   for(int i=0;i<n-1;i++){//n-1 passes
//     for(int j=0;j<n-i-1;j++){
//       if(arr[j]>arr[j+1]){
//         swap(arr[j],arr[j+1]);
//         flag=false;    //i.e if swapping happens that means array is not sorted
//       } 
//       else flag=true;   // if no swapping happens than array is already sorted than flag=true
//     }
//     if(flag==true){break;}  //check
//   }
//   for(int i=0;i<n;i++){
//     cout<<arr[i];
//   }
// }