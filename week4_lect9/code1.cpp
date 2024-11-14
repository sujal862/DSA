// permutation and combination
#include <iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++)
    f=f*i;
    return f;
}
int main()
{
    int n, r;
    cout << "enter n:";
    cin >> n;
    cout << "enter r:";
    cin >> r;
    int nfact=fact(n);       //calling fact function to give a value to nfact after putting x=n.
    int rfact=fact(r);      //calling fact function to give a value to rfact after putting x = r.
    int nrfact = fact(n - r);
    int nCr= nfact /( rfact * nrfact);
    cout <<nCr;
}