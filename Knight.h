#ifndef KNIGHT_H
#define KNIGHT_H
#include <string>
#include <iostream>
#include "Warrior.h"
using namespace std;
class Knight: public Warrior{
    private:
        int chargeBonus;
    public:
        Knight(string, int, int, int, int);
        int getChargeBonus();
        int calculateBurstDamage();
};
#endif