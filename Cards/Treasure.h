#ifndef MUNCHKIN_TREASURE_H
#define MUNCHKIN_TREASURE_H
#include "Card.h"
class Treasure : public Card
{
public:
    /**
     * C'tor of Treasure class which is an instance of a Card
     */
    Treasure();

    /**
    * D'tor of Treasure class
    */
    ~Treasure() override = default;

    /**
    * Handling the player's encounter with the card:
    * Treasures the player with 10 coins.
    * @param player - The player.
    * @return
    *      void
   */
    void applyEncounter(Player* player) const override;

    static const int COINS_TO_ADD = 10;
};

#endif //MUNCHKIN_TREASURE_H
