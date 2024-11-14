#include<iostream>
using namespace std;
int maze(int sr, int sc,int er,int ec){
    if(sr==er && sc==ec) return 1;  //i.e reached destination 
    if(sr>er || sc>ec) return 0;
    int rightways= maze(sr,sc+1,er,ec);
    int downways = maze(sr+1,sc,er,ec);
    return rightways + downways;
}
int main(){
    cout<<maze(0,0,2,2);
}



/*

//using Only two parameter(left-up);

#include<iostream>
using namespace std;
int maze(int er,int ec){
    if(er==1 && ec==1) return 1;  //i.e reached destination 
    if(er<1 ||ec<1) return 0;
    int rightways= maze(er,ec-1);
    int downways = maze(er-1,ec);
    return rightways + downways;
}
int main(){
    cout<<maze(3,3);
}
*/