#ifndef MUNCHKIN_ROGUE_H
#define MUNCHKIN_ROGUE_H
#include "Player.h"

class Rogue : public Player
{
public:
    explicit Rogue(std::string name) : Player(name) {}
    ~Rogue() override = default;
    void addCoins(int coinsToAdd) override;


protected:
    /**
     * A methods that prints the information of the Fighter
     * @param player
     */
    void printPlayer(std::ostream& os) const override;
};

#endif //MUNCHKIN_ROGUE_H
