// #include <bits/stdc++.h>
// using namespace std;

// int helper(int n, string ans){
//     if(ans.size() == n) return 1;

//     //left call always 
//     int left = helper(n, ans + '0');
//     char ch = ans[ans.size()-1];
//     int right = (ch != '1') ? helper(n, ans+'1') : 0;
//     return left + right;
// }
// int main(){
//     int n = 3;
//     cout<< helper(n, "");
// }


//observed patter n -> its forming fibonnaci number
#include <bits/stdc++.h>
using namespace std;

int helper(int n){
    if(n == 1) return 2;
    if(n == 2) return 3;

    return helper(n-1) + helper(n-2);
}
int main(){
    int n = 3;
    cout<< helper(n);
}