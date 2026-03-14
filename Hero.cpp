#include "Hero.h"
Hero:: Hero(string name, int helth,int baseP){
    heroName = name;
    health = helth;
    basePower = baseP;
}
Hero:: ~Hero(){
    cout<<"Destructor for Hero used."<<endl;
}
string Hero:: getName() const{
    return heroName;
}
int Hero:: getHealth() const{
    return health;
}
int Hero:: getPower() const{
    return basePower;
}
void Hero:: takeDamage(int damage){
    if((health-damage)<0){
        health = 0;
    }
    else{
        health -= damage;
    }
}
bool Hero:: operator>(const Hero &other) const{
    if(basePower>other.basePower){
        return true;
    }
    else{
        return false;
    }
}
int Hero:: operator+(const Hero &other) const{
    int total = health+ other.health;
    return total;
}