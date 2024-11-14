#include<iostream>
#include<stack>
using namespace std;

int solve(int val1,char ch , int val2){
    if(ch == '+') return val1 + val2;
    else if(ch == '-') return val1 - val2;
    else if(ch == '*') return val1 * val2;
    else return val1 / val2;
}

int main(){
    string s = "-/*+79483"; //prefix expression
    //we need only one stack val
    stack<int>val;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]>=48 && s[i]<=57){  //digit
            val.push(s[i]-48); 
        }
        else{  //s[i] is -> *,+,-,/
        //kaam
            int val1 = val.top();
            val.pop();
            int val2 = val.top();
            val.pop();
            int ans = solve(val1,s[i],val2);
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
    cout<<(7+9)*4/8-3;  //INFIX EXPRESSION
}