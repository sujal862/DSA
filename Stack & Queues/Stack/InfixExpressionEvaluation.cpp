#include<iostream>
#include<stack>
using namespace std;
int prio(char c){
    if(c=='+' || c=='-') return 1;
    else  return 2;
}
int solve(int val1,char ch , int val2){
    if(ch == '+') return val1 + val2;
    else if(ch == '-') return val1 - val2;
    else if(ch == '*') return val1 * val2;
    else return val1 / val2;
}

int main(){
    string s = "2+6*4/8-3"; //infix expression
    stack<int>val;
    stack<char>op;
    for(int i=0;i<s.size();i++){
        //check if s[i] is a digit (0-9)
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48); // s[i] is char
        }
        else{  //s[i] is -> *,+,-,/
            if(op.size()==0 || prio(op.top())<prio(s[i])) 
                op.push(s[i]);
            else{  // (prio(op.top()) >= prio(s[i]))
                while( op.size()>0 && prio(op.top()) >= prio(s[i])){
                    //work -> val1 op val2
                    char c = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1,c,val2);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    //operator stack can have values so make it empty by solving the left expression
    while(op.size()!=0){
        //work
        char c = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1,c,val2);
        val.push(ans);
    }
    cout<<val.top();
}