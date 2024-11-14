#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
    string removeDublicates(string &s){
    stack<char>st;
    st.push(s[0]);
    for(int i=0;i<s.size();i++){
        if(st.top()!=s[i]){
            st.push(s[i]);
        } 
        else continue;
    }
    string ans="";
    while(st.size()>0){
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }

int main(){
    string s = "aaabbccddaabfgghj";
    cout<<s<<endl;
    s = removeDublicates(s);
    cout<<s;
    
}
