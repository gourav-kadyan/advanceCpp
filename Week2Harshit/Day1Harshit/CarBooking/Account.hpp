#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP
#include<iostream>
/*
id 
username
static counter
disable all special member except destructor
<<out operator 
registeraccount() = 0
*/

class Account
{
private:
    /* data */
    unsigned int m_id;
    static unsigned int g_id;
    std::string m_username;

public:
    Account(/* args */) = delete;
    Account(const Account&) = delete;
    Account(Account&&) = delete;
    Account& operator=(const Account&) = delete;
    Account& operator=(Account&&) = delete;

    virtual void RegisterAccount() = 0;

    explicit Account(std::string username);

    ~Account() = default;

    unsigned int id() const { return m_id; }

    std::string username() const { return m_username; }
    void setUsername(const std::string &username) { m_username = username; }

    friend std::ostream &operator<<(std::ostream &os, const Account &rhs);
};

#endif // ACCOUNT_HPP
