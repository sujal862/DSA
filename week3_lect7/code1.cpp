#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "enter no. of rows:"; //--> no. of line
    cin >> r;
    cout << "enter no. of columns:"; // things in each line
    cin >> c;

    for (int i = 1; i <= c; i++)
    {

        for (int j = 1; j <= r; j++)   // NESTED LOOP
        {
            cout << "*";
        }
        cout << endl;
    }
}
