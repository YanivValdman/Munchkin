#include "../Players/Fighter.h"
#include "Barfight.h"
#include "../utilities.h"

void Barfight::applyEncounter(Player *player) const
{
    const Fighter* potentialFighter= dynamic_cast<Fighter*>(player);
    if(!potentialFighter)
    {
        player->damage(DEFAULT_HP_DECREASE);
    }
    printBarfightMessage(potentialFighter);
}
