#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(1);
    v.push_back(5);
    v.push_back(3);
    v.push_back(1);
    v.push_back(9);
    int x;
    cout << "enter x: ";
    cin >> x;
    for (int i = v.size() - 1; i >= 0; i--)
    { // size=6 , index-0 to 5
        if (x == v[i])
        {
            cout << "last ocurrence is:" << i;
            break;    //if ka under break dena ka mtlb jb tk if statement ak bar ni chlaga tbtk loop khtm ni hoga
        }
    }
}