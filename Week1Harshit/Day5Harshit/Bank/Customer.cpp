#include "Customer.hpp"

std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    std::string s {""};
    if(rhs.m_gender == GenderType::Male){
        s = "Male";
    }
    else {
        s = "Female";
    }
    os << " name: " << rhs.m_name
       << " age: " << rhs.m_age
       << " address: " << *rhs.m_address
       << " gender: " << s;
    return os;
}

// Customer::Customer(std::string name, unsigned int age,  long long house_number, std::string locality, std::string district, std::string state, GenderType gender)
// :m_name(name), m_age(age), m_address{std::make_shared<Address>(house_number, locality, district, state)}, m_gender(gender) 
// {}

Customer::Customer(std::string name, unsigned int age,  long long house_number, std::string locality, std::string district, std::string state, GenderType gender)
:m_name(name), m_age(age), m_address{new Address(house_number, locality, district, state)}, m_gender(gender) 
{}



