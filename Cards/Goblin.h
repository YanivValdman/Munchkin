//
// Created by yaniv on 15/03/2024.
//

#ifndef MUNCHKIN_GOBLIN_H
#define MUNCHKIN_GOBLIN_H
#include "Battle.h"
class Goblin : public Battle
{
public:
    /**
     * C'tor of Goblin class which is an instance of a Card
     */
    Goblin();

    /**
     * D'tor of Goblin class
     */
    ~Goblin() override = default;


    /**
     * Prints the details of the Goblin card
     * @param os - The ostream.
     */
    void printInfo(std::ostream& os) const override;

    static const int GOBLIN_FORCE = 6;
    static const int GOBLIN_LOOT = 2;
};

#endif //MUNCHKIN_GOBLIN_H
