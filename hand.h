#ifndef HAND_H
#define HAND_H

#include <vector>
#include <ostream>
#include "card.h"

class Hand
{
    std::vector<Card*> cards;
public:
    Hand();
    Hand(const Hand &hand);
    Hand& operator+=(const Hand& hand);
    void Add_card(Card* card);
    void Add_card(Card* card, int index);
    inline std::vector<Card*> getCards() const{
        return cards;
    }
    void Remove_card(int i);
    void sort_hand();
};

std::ostream& operator << (std::ostream& valja, Hand& h);
#endif // HAND_H
