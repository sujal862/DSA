#include<iostream>
using namespace std;

class Gun{
    public: 
    int ammo;
    int damage;
    int scope;
};

class player{
    private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun; //nested class

    public: //getter
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    bool isAlive(){
        return alive;
    }
    Gun getGun(){    //here return type is of class
        return gun;
    }
    //setter
    void setHealth(int health){
        this->health=health;
    }
    void setAge(int age){
        this->age=age;
    }
    void setScore(int score){
        this->score=score;
    }
    void setIsAlive(bool alive){
        this->alive=alive;
    }
    void setGun(Gun gun){
        this->gun = gun;
    }
};

int main(){
    player harsh; //object creation,statically
    player raghav;

//creating two gun object and giving one to harsh and other to raghav
    Gun akm;
    akm.ammo=100;
    akm.damage=50;
    akm.scope=2;

    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setIsAlive(true);
    harsh.setHealth(70);
    harsh.setGun(akm);

    Gun awm;
    awm.ammo=15;
    awm.damage=150;
    awm.scope=8;

    raghav.setAge(22);
    raghav.setScore(20);
    raghav.setIsAlive(200);
    raghav.setHealth(100);
    raghav.setGun(awm);

    Gun gun123 =harsh.getGun();
    cout<<gun123.ammo;


}