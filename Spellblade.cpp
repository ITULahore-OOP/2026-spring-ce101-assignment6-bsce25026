#include "Spellblade.h"
Spellblade:: Spellblade(string name, int helth, int bP, int armorR, int mana,int spellP): Warrior(name,helth, bP, armorR), MagicalEntity(mana, spellP){

}
int Spellblade:: calculateHybridDamage(){
    int hybridDamage = getPower() + getSpellPower();
    return hybridDamage;
}