#ifndef CHEQUE_HPP
#define CHEQUE_HPP
#include <iostream>
#include "Date.hpp"
#include <memory>

using DatePtr = std::shared_ptr<Date>;

class Cheque
{
private:
    /* data */
    unsigned long long int m_num;
    std::string m_sender;
    std::string m_reciever;
    static unsigned long long int g_num;
    long long m_acc_no;
    float m_amt;
    // DatePtr m_date;
    Date* m_date;

public:
    Cheque(/* args */) = delete;
    Cheque(Cheque&&) = delete;
    Cheque(const Cheque&) = delete;
    Cheque& operator=(const Cheque&) = delete;
    Cheque& operator=(Cheque&&) = delete;

    Cheque(std::string sender, std::string reciever,long long acc_no, float amt, unsigned int day, Month month, unsigned int year);

    ~Cheque() {
        delete m_date;
    }

    friend std::ostream &operator<<(std::ostream &os, const Cheque &rhs);
};

#endif // CHEQUE_HPP
