#include <iostream>
using namespace std;
int main()
{
    int test = 0;
    cout << "First character " << '1' << endl;
    cout << "Second character " << (test ? 3 : '1') << endl;  // in ternary operator data type of true and false should be same 
                                                              // if not same compiler will make it same for ex here - 3 : 49
    return 0;
}
