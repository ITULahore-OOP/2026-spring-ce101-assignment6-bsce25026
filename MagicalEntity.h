#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H
#include <string>
#include <iostream>
using namespace std;
class MagicalEntity{
    private:
        int manaPool;
        int spellPower;
    public:
        MagicalEntity(int,int);
        int const getMana();
        int getSpellPower();    
};
#endif