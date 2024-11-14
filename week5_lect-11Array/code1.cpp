#include <iostream>
using namespace std;
int main()
{
    int marks[6];
    // input
    int i;
    for (i = 0; i <= 5; i++)
    {
        cin >> marks[i];
    }
    // output
    for (i = 0; i <= 5; i++)
    {
        if (marks[i] < 35)
            cout << "roll :" << i << " ; ";
    }
    // i --> is Index
}