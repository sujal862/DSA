#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 4, 3, 6, 3,4,1};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++){
        bool flag = true;    // Reset the flag for each element
        for (int j = 0; j < n; j++) {
            if (i!=j && a[i] == a[j])  { flag= false; }
        }
        if (flag==true)  {cout << "first non-repeating element is: " << a[i];
        break;} 
    }
    return 0;
}
