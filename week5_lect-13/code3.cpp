#include <iostream>
#include <vector>
using namespace std;
sort02(vector<int> &v){
    int i = 0, j = v.size() - 1;
    while (i < j)
    {
        if (v[j]>0)
            j--; // do nothing let the element go it is on right place
        else if (v[i]<0)
            i++; // do nothing let the element go it is on right place
        else if (v[i]>0 && v[j]<0)
        {
            int temp=v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}
int main()
{
    vector<int> v;
    v.push_back(-1);
    v.push_back(7);
    v.push_back(-8);
    v.push_back(9);
    v.push_back(-4);
    v.push_back(-6);
    v.push_back(3);
    for (int i = 0; i < v.size(); i++) {  cout << v[i] << " ";} // print input
    cout << endl;
    sort02(v);
    for (int i = 0; i < v.size(); i++)  { cout << v[i] << " "; } // print output
}