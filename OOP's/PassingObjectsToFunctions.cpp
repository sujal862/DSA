#include<iostream>
using namespace std;
class player{
    private:
    int health;
    int age;
    int score;
    bool alive;

    public:
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
};

int addScore(player a,player b){
    return a.getScore() + b.getScore();
}

player getMaxScore(player a, player b){
    if(a.getScore() > b.getScore())
    return a;
    else 
    return b;
}

int main(){
    player harsh; //object creation,statically
    player raghav;

    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setIsAlive(true);
    harsh.setHealth(70);

    raghav.setAge(22);
    raghav.setScore(20);
    raghav.setIsAlive(200);
    raghav.setHealth(100);

    cout<<addScore(harsh,raghav)<<endl;

    player sanket= getMaxScore(harsh,raghav);
    cout<<sanket.getScore();

}