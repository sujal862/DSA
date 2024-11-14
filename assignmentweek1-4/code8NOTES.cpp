#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n5, n10, n50, n100, n500;
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;
    switch (amount >= 500)
    {
    case 1:
        n500 = amount / 500;
        amount = amount - (n500 * 500);
        cout << "500rs notes= " << n500 << endl;
    }
    switch (amount >= 100)
    {
    case 1:
        n100 = amount / 100;
        amount = amount - (n100 * 100);
        cout << "100rs notes= " << n100 << endl;
    }
    switch (amount >= 50)
    {
    case 1:
        n50 = amount / 50;
        amount = amount - (n50 * 50);
        cout << "50rs notes= " << n50 << endl;
    }
    switch (amount >= 10)
    {
    case 1:
        n10 = amount / 10;
        amount = amount - (n10 * 10);
        cout << "10rs notes= " << n10 << endl;
    }
    switch (amount >= 5)
    {
    case 1:
        n5 = amount / 5;
        amount = amount - (n5 * 5);
        cout << "5rs notes= " << n5 << endl;
    }
    switch (amount >= 2)
    {
    case 1:
        n2 = amount / 2;
        amount = amount - (n2 * 2);
        cout << "2rs notes= " << n2 << endl;
    }
    switch (amount >= 1)
    {
    case 1:
        n1 = amount / 1;
        amount = amount - (n1 * 1);
        cout << "1rs notes= " << n1 << endl;
    }
}