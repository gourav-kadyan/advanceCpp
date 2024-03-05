#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP
#include <iostream>
#include "GenderType.hpp"
#include "Address.hpp"
#include <memory>

using AddressPtr = std::shared_ptr<Address>;

class Customer 
{
private:
    /* data */
    std::string m_name;
    unsigned int m_age;
    // AddressPtr m_address;
    Address* m_address;
    GenderType m_gender;

public:
    Customer() = delete;
    Customer(const Customer&) = delete;
    Customer(Customer&&) = delete;
    Customer& operator=(const Customer&) = delete;
    Customer& operator=(Customer&&) = delete;

    Customer(std::string name, unsigned int age, long long house_number, std::string locality, std::string district, std::string state, GenderType gender);

    ~Customer() {
        delete m_address;
    }

    unsigned int age() const { return m_age; }

    std::string name() const { return m_name; }
    void setName(const std::string &name) { m_name = name; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);

};

#endif // CUSTOMER_HPP
