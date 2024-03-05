#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP
#include "Card.hpp"
#include "Cheque.hpp"
#include "Customer.hpp"
#include <ostream>

using CardPtr = std::shared_ptr<Card>;
using ChequePtr = std::shared_ptr<Cheque>;
using CustomerPtr = std::shared_ptr<Customer>;

class Account
{
private:
    /* data */
    double m_amount;
    unsigned long long m_acc_no;
    // CardPtr m_card;
    // ChequePtr m_cheque;
    // CustomerPtr m_customer;
    Card* m_card;
    Cheque* m_cheque;
    Customer* m_customer;
    static unsigned long long g_acc_no;
public:
    Account(/* args */) = delete;
    Account(const Account&) = delete;
    Account(Account&&) = delete;
    Account& operator=(const Account&) = delete;
    Account& operator=(Account&&) = delete;

    Account(double amount, std::string name,unsigned int day,  Month month, unsigned int year, std::string reciever, float amt, unsigned int age, long long house_number, std::string locality, std::string district, std::string state, GenderType gender);
    Account(double amount, std::string name,Month month, unsigned int year, unsigned int age, long long house_number, std::string locality, std::string district, std::string state, GenderType gender);
    ~Account(){
        if(m_card){
            delete m_card;
        }
        if(m_cheque){
            delete m_cheque;
        }
        if(m_customer){
            delete m_customer;
        }
        std::cout << "destructor Called";
    }

    friend std::ostream &operator<<(std::ostream &os, const Account &rhs);
};

#endif // ACCOUNT_HPP
