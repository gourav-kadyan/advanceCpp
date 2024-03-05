#include "Account.hpp"

unsigned long long Account::g_acc_no = 100000000;

std::ostream &operator<<(std::ostream &os, const Account &rhs) {
    os << "m_acc_no: " << rhs.m_acc_no
       << " m_user: " << rhs.m_user
       << " m_current_balance: " << rhs.m_current_balance;
    return os;
}

Account::Account(std::string name, double current_balance)
:m_user(name), m_current_balance(current_balance), m_acc_no(g_acc_no++)
{}

