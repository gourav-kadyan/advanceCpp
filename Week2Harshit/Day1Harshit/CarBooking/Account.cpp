#include "Account.hpp"

unsigned int Account::g_id = 1000;

std::ostream &operator<<(std::ostream &os, const Account &rhs) {
    os << "m_id: " << rhs.m_id
       << " m_username: " << rhs.m_username;
    return os;
}

Account::Account(std::string username)
:m_username{username},m_id{g_id++}{}
