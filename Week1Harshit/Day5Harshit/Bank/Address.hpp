#ifndef ADDRESS_HPP
#define ADDRESS_HPP

#include<iostream>

class Address
{
private:
    /* data */
    long long m_house_number;
    std::string m_locality;
    std::string m_district;
    std::string m_state;
public:
    Address() = delete;
    Address(const Address&) = delete;
    Address(Address&&) = delete;
    Address& operator=(const Address&) = delete;
    Address& operator=(Address&&) = delete;

    Address(long long house_number, std::string locality, std::string district, std::string state);

    ~Address() {}

    friend std::ostream &operator<<(std::ostream &os, const Address &rhs);
};

#endif // ADDRESS_HPP
