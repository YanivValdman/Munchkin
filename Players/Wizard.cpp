#include "Wizard.h"
#include "../utilities.h"

void Wizard::heal(int HPToAdd)
{
    this->Player::heal(MULTIPLY * HPToAdd);
}

void Wizard::printPlayer(std::ostream& os) const
{
    printPlayerDetails(os, getName(),"Wizard" ,
                       getLevel(), getForce(), getHP(), getCoins());
}