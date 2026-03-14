#include "MagicalEntity.h"
MagicalEntity:: MagicalEntity(int mana,int spellP){
    manaPool = mana;
    spellPower = spellP;
}
int const MagicalEntity:: getMana(){
    return manaPool;
}
int MagicalEntity:: getSpellPower(){
    return spellPower;
}