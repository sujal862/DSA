#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter order of square matrix: ";
    cin >> n;
    int a[n][n];
    int minr = 0, minc = 0, maxr = n - 1, maxc = n - 1;

    int value = 1; // Variable to keep track of the current value

    while (minr <= maxr && minc <= maxc){
        // Right
        for (int i = minc; i <= maxc; i++){
            a[minr][i] = value++;
        }
        minr++;
        // Down
        if (minr > maxr || minc > maxc)  break;
        for (int i = minr; i <= maxr; i++){
            a[i][maxc] = value++;
        }
        maxc--;
        // Left
        if (minr > maxr || minc > maxc)  break;
        for (int i = maxc; i >= minc; i--){
            a[maxr][i] = value++;
        }
        maxr--;
        // Up
        if (minr > maxr || minc > maxc)  break;
        for (int i = maxr; i >= minr; i--){
            a[i][minc] = value++;
        }
        minc++;
    }
    //output
    cout << "Elements of the matrix entered in spiral order are: " << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
