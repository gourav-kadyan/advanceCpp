/*

*/

#ifndef CUSTOMERACCOUNT_HPP
#define CUSTOMERACCOUNT_HPP

#include <iostream>
#include "Gender.hpp"
#include "Account.hpp"

class CustomerAccount : public Account
{
private:
    /* data */
    std::string m_full_name;
    Gender m_gender_type;
public:
    CustomerAccount(/* args */) = delete;
    CustomerAccount(const CustomerAccount&) = delete;
    CustomerAccount(CustomerAccount&&) = delete;
    CustomerAccount& operator=(const CustomerAccount&) = delete;
    CustomerAccount& operator=(CustomerAccount&&) = delete;

    CustomerAccount(std::string name, std::string full_name, Gender gender_type);

    ~CustomerAccount() {}

    Gender genderType() const { return m_gender_type; }

    std::string fullName() const { return m_full_name; }
    void setFullName(const std::string &full_name) { m_full_name = full_name; }

    void RegisterAccount() override;

    friend std::ostream &operator<<(std::ostream &os, const CustomerAccount &rhs);
};




#endif // CUSTOMERACCOUNT_HPP
