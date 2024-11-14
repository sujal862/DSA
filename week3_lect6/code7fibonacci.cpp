#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;
    int a = 1, b = 1, sum = 0;
    for (int i = 1; i <= n - 2; i++)
    { // loop ko 2 bar km chlao because loop strt hi 3rd term sa ho rha
        sum = a + b;
        a = b;
        b = sum;

    }
    
    cout <<n<< "th fibonacci term is " << sum; // because at last b=sum
}