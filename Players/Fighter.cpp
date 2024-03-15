#include "Fighter.h"
#include "../utilities.h"

int Fighter::getAttackStrength() const
{
    return MULTIPLY * getForce() + getLevel();
}

void Fighter::printPlayer(std::ostream& os) const
{
    printPlayerDetails(os, getName(),"Fighter" ,
                       getLevel(), getForce(), getHP(), getCoins());
}