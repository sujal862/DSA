#include<iostream>
using namespace std;
int main()
{
    int sp,cp;
    cout<<"Enter the SP of prouct: ";
    cin>>sp;
    cout<<"Enter the CP of prouct: ";
    cin>>cp;
    if (sp>cp){
        cout<<"seller has made a profit of Rs: "<<sp-cp;
    }
    if(sp==cp){
        cout<<"neither profit nor loss is made by seller";
    }
    if(cp>sp){
        cout<<"seller has made a loss of Rs: "<<cp-sp;
    }
}