#ifndef DATE_HPP
#define DATE_HPP
#include "Month.hpp"
#include <ostream>

class Date
{
private:
    /* data */
    unsigned int m_day;
    Month m_month;
    unsigned int m_year;

public:
    Date() = delete;
    Date(const Date&) = delete;
    Date(Date&&) = delete;
    Date& operator=(const Date&) = delete;
    Date& operator=(Date&&) = delete;

    Date(unsigned int day, Month month, unsigned int year);

    ~Date() {}

    friend std::ostream &operator<<(std::ostream &os, const Date &rhs);
};

#endif // DATE_HPP
