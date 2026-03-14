#include "Knight.h"
Knight:: Knight(string name, int helth, int baseP, int armorR, int chargeB):Warrior(name, helth,baseP,armorR){
    chargeBonus = chargeB;
}
int Knight:: getChargeBonus(){
    return chargeBonus;
}
int Knight:: calculateBurstDamage(){
    int burstDamage = 0;
    burstDamage = getPower()+chargeBonus;
    return burstDamage;
}