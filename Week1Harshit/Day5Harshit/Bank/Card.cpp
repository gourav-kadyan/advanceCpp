#include "Card.hpp"

unsigned int Card::g_cvv = 100;
unsigned long long Card::g_card_number = 10000000;

// Card::Card(std::string name, Month month, unsigned int year)
// : m_name(name), m_initial{std::make_shared<CardDate>(month, year)}, m_expiry{std::make_shared<CardDate>(month, year + 10)}
// {
//     m_cvv = g_cvv++;
//     m_card_number = g_card_number++;
// }

Card::Card(std::string name, Month month, unsigned int year)
: m_name(name), m_initial{new CardDate(month, year)}, m_expiry{new CardDate(month, year + 10)}
{
    m_cvv = g_cvv++;
    m_card_number = g_card_number++;
}

std::ostream &operator<<(std::ostream &os, const Card &rhs) {
    os << "m_card_number: " << rhs.m_card_number
       << " m_name: " << rhs.m_name
       << " m_initial: " << *rhs.m_initial
       << " m_expiry: " << *rhs.m_expiry
       << " cvv " << rhs.m_cvv;
    return os;
}
