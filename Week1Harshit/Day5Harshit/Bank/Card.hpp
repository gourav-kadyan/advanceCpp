#ifndef CARD_HPP
#define CARD_HPP
#include<iostream>
#include "CardDate.hpp"
#include <memory>

using CardDatePtr = std::shared_ptr<CardDate>;

class Card
{
private:
    /* data */
    unsigned long long m_card_number;
    std::string m_name;
    // CardDatePtr m_initial;
    // CardDatePtr m_expiry;
    CardDate* m_initial;
    CardDate* m_expiry;
    static unsigned int g_cvv;
    unsigned int m_cvv;
    static unsigned long long g_card_number;
public:
    Card(/* args */)  = delete;
    Card(const Card&) = delete;
    Card(Card&&) = delete;
    Card& operator=(const Card&) = delete;
    Card& operator=(Card&&) = delete;

    Card(std::string name, Month month, unsigned int year);

    ~Card() {
        delete m_initial;
        delete m_expiry;
    }

    friend std::ostream &operator<<(std::ostream &os, const Card &rhs);
};

#endif // CARD_HPP
