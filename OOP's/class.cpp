/* #include<iostream>
#include <string>
using namespace std;
class player{  //data type defined by user  
    public:
        int score;  //data members
        int health;
        string name;
    };
int main(){
    player amit;
    amit.score=100;
    amit.health=90;
    cout<<amit.score;
}*/

//->Q
#include<iostream>
using namespace std;
class book{
    public:
    string name;
    int price;
    int nop;
    
    int countBooks(int p){
        if(p<price){
            return 1;
        }
        else return 0;
    }
    bool IsBookPresent(string title){
        if(name==title){
            return true;
        }
            else return false;
    }

};
int main(){
    book time;
    time.name="impoftime";
    time.price=1000;
    time.nop=5000;
    cout<<time.countBooks(100);

}