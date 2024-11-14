#include <iostream>
#include <climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int maxVal =INT_MIN;
    int minVal =INT_MAX;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            maxVal = max(maxVal, a[i][j]);
            minVal = min(minVal, a[i][j]);
        }
    }

    int r = 0;
    int c = 0;

    for (int i = 0; i < n; ++i) {
        bool flag = false;
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == maxVal || a[i][j] == minVal) {
                flag = true;
                break;
            }
        }
        if (flag==false) {
            r++;
        }
    }

    for (int j = 0; j < m; ++j) {
        bool flag = false;
        for (int i = 0; i < n; ++i) {
            if (a[i][j] == maxVal || a[i][j] == minVal) {
                flag = true;
                break;
            }
        }
        if (flag==false) {
            c++;
        }
    }
    cout<<r*c<<endl;
    }
}
