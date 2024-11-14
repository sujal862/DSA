#include<iostream>
#include<stack>
using namespace std;

string solve(string val1,char ch , string val2){
    string s = "";
    s+=val1;
    s.push_back(ch);
    s+=val2;
    return  s;
}

int main(){
    string s = "79+4*8/3-"; //postfix expression
    //we need only one stackk val
    stack<string>val;
    for(int i=0;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57){  //digit
            val.push(to_string(s[i]-48)); 
        }
        else{  //s[i] is -> *,+,-,/
        //kaam
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            string ans = solve(val1,s[i],val2);
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
    cout<<"(7+9)*4/8-3";  //INFIX EXPRESSION
}