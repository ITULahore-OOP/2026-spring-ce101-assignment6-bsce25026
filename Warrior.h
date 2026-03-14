#ifndef WARRIOR_H
#define WARRIOR_H
#include<string>
#include<iostream>
#include "Hero.h"
using namespace std;
class Warrior: public Hero{
    private: 
        int armorRating;
    
    public: 
        Warrior(string, int, int, int);
        int getArmor();
        int calculateEffectiveHealth();    
};


#endif