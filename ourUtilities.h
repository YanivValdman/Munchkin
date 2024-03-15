#ifndef MUNCHKIN_OURUTILITIES_H
#define MUNCHKIN_OURUTILITIES_H
#include <string>

class IsBetween
{
private:
    int m_lower;
    int m_upper;
public:
    IsBetween(int lower, int upper):
            m_lower(lower),
            m_upper(upper)
    {}
    bool operator()(int check) const
    {
        return (check >= m_lower && check <= m_upper);
    }
};


bool isALetter(char character);

/**
 * Validates the name of the card -
 * Maximum 15 chars long, no spaces, english letters only
 * @param name - The card name to validate
 * @return - true if valid, false if not
 */
bool isValidName(std::string name);

static const int MAX_NAME_LENGTH = 15;
#endif //MUNCHKIN_OURUTILITIES_H
