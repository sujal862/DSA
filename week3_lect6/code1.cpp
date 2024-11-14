//PRIME OR COMPOSITE
#include <iostream>
using namespace std;
int main()
{
    // cout<<"enter the number :";
    // int n,i;
    // cin>>n;
    // for(i=2;i<=n-1;i++){
    // if(n%i==0) //it means i is a factor of n
    // {cout<<n<<" is a composite number";}

    // else cout<<n<<" is a prime number";
    // break;
    // }
    // if(n==2){ //in case of n=2 loop dosent runs because i=2 to 1; so the condition is defined alg sa
    // cout << n << " is a prime number";
    // }
    // else if (n==1) // same|^
    //  cout<<n<<" is a neither prime nor composite";

    cout << "enter the number :";
    int n,i;
    cin>>n;
    bool flag = true; // true means prime
    for(i=2;i<=n-1;i++){
        if(n%i==0){ //it means i is a factor of n
            flag = false; // false--> composite number
            break;
        }
    }
    if (n == 1) cout<<n<<" is a neither prime nor composite";
    else if (flag == true) cout<<n<<" is a prime number";
    else  cout <<n<<" is a composite number";
}

