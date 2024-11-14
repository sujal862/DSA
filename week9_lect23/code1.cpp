#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {19, 12, 23, 8, 16};
    int n = size(arr);
    vector<int> v(n, 0);  //0-> not visited indx and 1-> visited indx
    for (int i = 0; i < n; i++)
    {
        int min = INT_MAX,minidx=0;
        for (int j = 0; j < n; j++)
        {
            if (v[j] == 0)
            {
                if (arr[j] < min)
                {
                    min = arr[j];  
                    minidx=j;
                }
            }
        }
        arr[minidx] = i;
        v[minidx] = 1;
    }
    for(int ele:arr){
        cout<<ele<<" ";
    }
}