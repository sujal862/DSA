#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a[] = {1, 1, 4, 4, 2, 2 ,3,3,7,7,8,8,9,9,10,10,5,5,3,3,6,90,90};
    int n=sizeof(a)/4;
    for (int i = 0; i <= n-1; i++){
        int count = 0;
        for (int j = 0; j <= n-1; j++)
        {
            if (i != j && a[i] == a[j])  { count++;}
        }
        if (count == 0)   {cout << "unique num: " << a[i]; }
    }
}