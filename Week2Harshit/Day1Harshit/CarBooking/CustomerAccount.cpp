#include "CustomerAccount.hpp"

std::ostream &operator<<(std::ostream &os, const CustomerAccount &rhs) {
 
    std::string val {""};
    if(rhs.m_gender_type == Gender::Male){
        val = "Male";
    }
    else if(rhs.m_gender_type == Gender::Female){
        val = "Female";
    }
    else{
        val = "Others";
    }
    os << "m_full_name: " << rhs.m_full_name
       << " m_gender_type: " << val;
    return os;
}

CustomerAccount::CustomerAccount(std::string name, std::string full_name, Gender gender_type)
:Account(name), m_full_name{full_name}, m_gender_type{gender_type} {}

void CustomerAccount::RegisterAccount()
{
    std::cout << "Account verified via OTP\n";
}
