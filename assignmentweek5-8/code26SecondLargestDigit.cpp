#include <iostream>
#include <climits>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int max = INT_MIN;
    for (int i = 0; i < s.size(); i++)
    {
        int x = s[i] - '0';   //geting integer(char to int) by subt ascii value(0->48)
        if (max < x)
            max = x;
    }
    //second largest
    int smax = INT_MIN;
    for (int i = 0; i < s.size(); i++)
    {
        int x = s[i] - '0';
        if (smax != max && smax < x && x!=max)
            smax = x;
    }
    cout << smax;
}
