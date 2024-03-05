#ifndef CARDDATE_HPP
#define CARDDATE_HPP

#include "Month.hpp"
#include <ostream>

class CardDate
{
private:
    /* data */
    Month m_month;
    unsigned int m_year;
public:
    CardDate(/* args */) = delete;
    CardDate(const CardDate& obj) = delete;
    CardDate& operator=(const CardDate&) = delete;
    CardDate& operator=(CardDate&&) = delete;
    CardDate(CardDate&&) = delete;

    CardDate(Month month, unsigned int year);


    ~CardDate() {}

    friend std::ostream &operator<<(std::ostream &os, const CardDate &rhs);
};

#endif // CARDDATE_HPP
