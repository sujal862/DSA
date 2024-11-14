//series
#include <iostream>
using namespace std;
int main()
{
    cout << "enter n: ";
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = i;
        if (i % 2 == 0)
        {
            a = -a;
        }
        sum = sum + a;
    }
    cout << "sum of series 1-2+3-4+5-6.....n is = " << sum;

    /*or  
#include <iostream>
using namespace std;
int main()
{
    cout << "enter n: ";
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = i;
        if (i % 2 == 0)
        {
            a = -a;
            sum = sum + a;
        }
        else
            sum = sum + i;
    }
    cout << sum;
}*/
}

