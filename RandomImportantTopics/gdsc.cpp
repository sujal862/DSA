// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int main() {
//     int T;
//     cin >> T;

//     for (int t = 0; t < T; ++t) {
//         int N;
//         cin >> N;

//         string A, B;
//         cin >> A >> B;

//         string C;
//         for (int i = 0; i < N; ++i) {
//             int sum = (A[i] -'0' + B[N - i - 1]-'0') % 10;
//             C += to_string(sum);
//         }

//         cout << C << endl;
//     }

//     return 0;
// }

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int correct(int a[],int n,int i,int count){
    for(int j=i;j<n;j++){
        if(j%2!=a[j]%2 && i%2==a[j]%2){
            swap(a[i],a[j]);
            count++;
            break;
        }
        else if(j==n-1) count=-1;
    }
    return count;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(i%2!=a[i]%2){
            count=correct(a,n,i,count);
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
