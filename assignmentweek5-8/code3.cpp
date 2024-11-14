#include <iostream>
using namespace std;
int main()
{
    bool flag = true;
    int arr[5] = {1, 2, 3, 4, 7};
    for (int i = 1; i <= 4; i++)
    {
        // Unsorted pair found
        if (arr[i - 1] > arr[i])
        {
            flag = false;
            break; // Exit the loop since we found an unsorted pair
        }
    }
    if (flag==false)
        cout << "unsorted" << endl;
    else
        cout << "sorted" << endl;
}
