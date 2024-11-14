#include<iostream>
using namespace std;
void removechar (string ans,string original){
    if(original.length()==0){ 
        cout<<ans; 
        return;
    }
    char ch =original[0];
    if(ch=='a') removechar(ans,original.substr(1));
    else removechar(ans+ch,original.substr(1));
}
int main(){
    string str ="Sujal";
    removechar("",str);
}



/* using idx 

#include<iostream>
using namespace std;
void removechar (string ans,string original,int idx){
    if(original.length()==idx){ 
        cout<<ans; 
        return;
    }
    char ch= original[idx];
    if(ch=='a') removechar(ans,original,idx+1);
    else removechar(ans+ch,original,idx+1);
}
int main(){
    string str ="Sujal";
    removechar("",str,0);
}

*/
