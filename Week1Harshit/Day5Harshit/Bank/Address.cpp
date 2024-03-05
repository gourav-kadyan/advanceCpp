#include "Address.hpp"

Address::Address(long long house_number, std::string locality, std::string district, std::string state)
:m_house_number(house_number), m_locality(locality), m_district(district), m_state(state)
{}

std::ostream &operator<<(std::ostream &os, const Address &rhs) {
    os << "m_house_number: " << rhs.m_house_number
       << " m_locality: " << rhs.m_locality
       << " m_district: " << rhs.m_district
       << " m_state: " << rhs.m_state;
    return os;
}
