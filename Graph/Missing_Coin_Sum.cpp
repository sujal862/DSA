#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (auto &x : nums) {
        cin >> x;
    }
    sort(nums.begin(), nums.end());
    long long smallest = 1; // represent ki smalles-1 tk ka numbers tk ka sum mil skta ha abhi

    for(auto &coin : nums){
        if(coin <= smallest) smallest += coin;
        else{
            cout<<smallest<<endl;
            return 0;
        }
    }
    cout<<smallest<<endl;
    return 0;
}
