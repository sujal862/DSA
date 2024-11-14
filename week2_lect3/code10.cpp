#include <iostream>
using namespace std;
int main()

//using nested else if ladder

/* {
    cout<<"enter marks b/w 1 to 100: ";
    int x;
    cin>>x;
    if (x>91){
        cout<<"excellent";
    }
    else{
        if(x>81){
        cout<<"very good";
     }
        else{
            if (x>71){
                cout<<"good";
            }
            else{
                if(x>61){
                    cout<<"can do better";
                }
                else {
                    if(x>51){
                    cout<<"average";}
                    else{
                        if(x>40){
                            cout<<"below average";
                        }
                        else{
                            if(x<40){
                                cout<<"fail";
                            }
                        }
                    }
                }
            }
        }
     }
} */

//or using -->'else if'


{
    cout << "enter marks b/w 1 to 100: ";
    int x;
    cin >> x;
    if (x > 91){
        cout<<"excellent";
    }
    else if (x > 81)
    {
        cout << "very good";
    }
    else if (x > 71)
    {
        cout << "good";
    }
    else if (x > 61)
    {
        cout << "good";
    }
    else if (x > 51)
    {
        cout << "can do better";
    }
    else if (x > 40)
    {
        cout << "below average";
    }
    else if (x <40)
    {
        cout << "fail";
    }
}    