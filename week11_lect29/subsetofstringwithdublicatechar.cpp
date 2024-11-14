#include<iostream>
#include<vector>
using namespace std;
void sub(string orig,string ans,vector<string>&v,bool flag){
    if(orig==""){
        v.push_back(ans);
        return ;
    }
    char ch=orig[0];
    if(orig.size()==1){
    if(flag==true){sub(orig.substr(1),ans+ch,v,true);}//append    
    sub(orig.substr(1),ans,v,true);//no append
    return; //taki nicha wala loop na chla koi ak hi chla
    }

    char dh=orig[1];
    if(ch==dh){  //dublicate found
    if(flag==true) {sub(orig.substr(1),ans+ch,v,true);}//append    
    sub(orig.substr(1),ans,v,false);//no append
    }

    else{  //dublicate not found
    if(flag==true) {sub(orig.substr(1),ans+ch,v,true);}//append    
    sub(orig.substr(1),ans,v,true);//no append
    }

}
int main(){
    string orig="aac";
    vector<string>v;
    sub(orig,"",v,true);
    for(string ele : v){
        cout<<ele<<endl;
    }
}