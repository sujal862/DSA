#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){    //will decide no. of lines
        for(int j=1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
