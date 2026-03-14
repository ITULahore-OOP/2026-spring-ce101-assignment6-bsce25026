#include "Warrior.h"

Warrior:: Warrior(string name, int health, int baseP, int armorR):Hero(name, health, baseP){
    armorRating = armorR;
}
int Warrior:: getArmor(){
    return armorRating;
}
int Warrior:: calculateEffectiveHealth(){
    int effectiveHealth = 0;
    effectiveHealth = getHealth()+(armorRating*2);
    return effectiveHealth;
}