#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter row of matrix: ";
    cin >> m;
    int n;
    cout << "enter cols of matrix: ";
    cin >> n;
        // input
        int a[m][n];
        cout << "enter the elements of matrix: ";
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        cout<<endl;
        //spiral code
        cout<<" spiral of matrix is: ";
        int minr=0 , minc=0 , maxr=m-1 , maxc=n-1;    // 4 variables defining
        while(minr<=maxr && minc<=maxc){
        //right
        for(int i=minc;i<=maxc;i++){
           cout<<a[minr][i]<<" ";    
        }
        minr++;
        if(minr>maxr || minc>maxc) break;     // whole while loop will break
        //down  
        for(int i=minr;i<=maxr;i++){
            cout<<a[i][maxc]<<" ";
        }
        maxc--;
        if (minr > maxr || minc > maxc) break;
        //left
        for(int i=maxc;i>=minc;i--){
            cout<<a[maxr][i]<<" ";
        }
        maxr--;
        if (minr > maxr || minc > maxc) break;
        //up
        for(int i=maxr;i>=minr;i--){
            cout<<a[i][minc]<<" "; 
        }
        minc++;
        }
}