#include <iostream>
    using namespace std;
    int main()
    {
        int arr1[3][3];
        int arr2[3][3];
        cout<<"enter first matrix:";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                 cin>>arr1[i][j];
            }
        }
        cout << "enter second matrix:";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                 cin >> arr2[i][j];
            }
        }
        // adding
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                arr1[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    cout<<endl;
    //output
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
                cout<<arr1[i][j]<<" ";
        }
        cout << endl;
    }
}