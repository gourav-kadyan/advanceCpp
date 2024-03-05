#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP
#include <iostream>

class Account
{
private:
    unsigned long long m_acc_no;
    static unsigned long long g_acc_no;
    std::string m_user;
    double m_current_balance;
public:
    Account() = delete;
    Account(const Account&) = delete;
    Account(Account&&) = delete;
    Account& operator=(const Account&) = delete;
    Account& operator=(Account&&) = delete;

    Account(std::string name, double current_balance);


    ~Account() {}

    unsigned long long accNo() const { return m_acc_no; }

    std::string user() const { return m_user; }
    void setUser(const std::string &user) { m_user = user; }

    double currentBalance() const { return m_current_balance; }
    void setCurrentBalance(double current_balance) { m_current_balance = current_balance; }

    friend std::ostream &operator<<(std::ostream &os, const Account &rhs);
};

#endif // ACCOUNT_HPP
