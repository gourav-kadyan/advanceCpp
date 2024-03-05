#include "Account.hpp"

unsigned long long Account::g_acc_no = 10000000;

// Account::Account(double amount, std::string name, Month month, unsigned int year, unsigned int age, long long house_number, std::string locality, std::string district, std::string state, GenderType gender)
// :m_amount(amount),m_card{std::make_shared<Card>(name,month,year)},m_customer{std::make_shared<Customer>(name,age,house_number,locality,district,state,gender)}
// {
//     m_acc_no = g_acc_no++;
// }

// Account::Account(double amount, std::string name, unsigned int day, Month month, unsigned int year, std::string reciever, float amt, unsigned int age, long long house_number, std::string locality, std::string district, std::string state, GenderType gender)
// :m_amount(amount),m_card{std::make_shared<Card>(name,month,year)},m_customer{std::make_shared<Customer>(name,age,house_number,locality,district,state,gender)}
// {

//     m_acc_no = g_acc_no++;
//     m_cheque = std::make_shared<Cheque>(name,reciever,m_acc_no,amount,day,month,year);
// }

Account::Account(double amount, std::string name, Month month, unsigned int year, unsigned int age, long long house_number, std::string locality, std::string district, std::string state, GenderType gender)
:m_amount(amount),m_card{new Card(name,month,year)},m_customer{new Customer(name,age,house_number,locality,district,state,gender)}
{
    m_acc_no = g_acc_no++;
}

Account::Account(double amount, std::string name, unsigned int day, Month month, unsigned int year, std::string reciever, float amt, unsigned int age, long long house_number, std::string locality, std::string district, std::string state, GenderType gender)
:m_amount(amount),m_card{new Card(name,month,year)},m_customer{new Customer(name,age,house_number,locality,district,state,gender)}
{

    m_acc_no = g_acc_no++;
    m_cheque = new Cheque(name,reciever,m_acc_no,amount,day,month,year);
}

std::ostream &operator<<(std::ostream &os, const Account &rhs) {

    std::cout<<"Working\n";
    os << "m_amount: " << rhs.m_amount
       << " m_acc_no: " << rhs.m_acc_no
       << " m_card: " << *rhs.m_card
       << " m_customer: " << *rhs.m_customer;
       if(rhs.m_cheque){
        os << " m_cheque: " << *rhs.m_cheque;
       }
    return os;
}


