#include<iostream>
using namespace std;
    class Bike{
        public:
        int tyreSize;
        int engineSize;

        //constructor creation
        Bike(int tyreSize,int engineSize){
            this->tyreSize=tyreSize;
            this->engineSize=engineSize;
        }
    };

    int main(){
        Bike tvs(12,100); //object creation + calling constructor to set values
        Bike honda(13,150);
        cout<<tvs.engineSize<<endl;
    }
