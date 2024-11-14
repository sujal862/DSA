//REVERSE OF ARRAY
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i <= a.size() - 1; i++)
    {
        cout << a[i] << " ";
    }
}
    int main()
    {
        vector<int> v;
        v.push_back(1);
        v.push_back(3);
        v.push_back(2);
        v.push_back(4);
        v.push_back(3);
        v.push_back(4);
        display(v);
        cout<<endl;
        //reverse
        int i = 0;
        int j = v.size() - 1;
        while(i<=j){
        //swap v[i] and v[j]
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    display(v);
    }