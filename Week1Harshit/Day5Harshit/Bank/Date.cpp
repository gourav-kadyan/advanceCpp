#include "Date.hpp"

Date::Date(unsigned int day, Month month, unsigned int year)
:m_day(day), m_month(month), m_year(year)
{}

std::ostream &operator<<(std::ostream &os, const Date &rhs) {

    std::string s {""};

    if (rhs.m_month == Month::Jan) {
        s = "Jan";
    } else if (rhs.m_month == Month::Feb) {
        s = "Feb";
    } else if (rhs.m_month == Month::Mar) {
        s = "Mar";
    } else if (rhs.m_month == Month::Apr) {
        s = "Apr";
    } else if (rhs.m_month == Month::May) {
        s = "May";
    } else if (rhs.m_month == Month::Jun) {
        s = "Jun";
    } else if (rhs.m_month == Month::Jul) {
        s = "Jul";
    } else if (rhs.m_month == Month::Aug) {
        s = "Aug";
    } else if (rhs.m_month == Month::Sept) {
        s = "Sept";
    } else if (rhs.m_month == Month::Oct) {
        s = "Oct";
    } else if (rhs.m_month == Month::Nov) {
        s = "Nov";
    } else if (rhs.m_month == Month::Dec) {
        s = "Dec";
    } else {
        s = "Don't Know";
    }


    os << " day: " << rhs.m_day
       << " month: " << s
       << " year: " << rhs.m_year;

    return os;
}
