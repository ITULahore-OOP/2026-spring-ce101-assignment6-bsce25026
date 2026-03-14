#ifndef SPELLBLADE_H
#define SPELLBLADE_H
#include<string>
#include <iostream>
#include "Warrior.h"
#include "MagicalEntity.h"
using namespace std;
class Spellblade: public Warrior, MagicalEntity{
    public:
        Spellblade(string, int, int, int, int,int);
        int calculateHybridDamage();
};
#endif