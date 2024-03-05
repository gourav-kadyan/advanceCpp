#include "Cheque.hpp"

unsigned long long int Cheque::g_num = 100000;

// Cheque::Cheque(std::string sender, std::string reciever, long long acc_no, float amt, unsigned int day, Month month, unsigned int year):m_sender(sender), m_reciever(reciever), m_acc_no(acc_no),m_amt(amt),m_date{ std::make_shared<Date>(day,month,year)}
// {
//     m_num = g_num++;
// }

Cheque::Cheque(std::string sender, std::string reciever, long long acc_no, float amt, unsigned int day, Month month, unsigned int year):m_sender(sender), m_reciever(reciever), m_acc_no(acc_no),m_amt(amt),m_date{ new Date(day,month,year)}
{
    m_num = g_num++;
}



std::ostream &operator<<(std::ostream &os, const Cheque &rhs)
{
    os << "m_num: " << rhs.m_num
       << " m_sender: " << rhs.m_sender
       << " m_reciever: " << rhs.m_reciever
       << " m_acc_no: " << rhs.m_acc_no
       << " m_date: " << *rhs.m_date;
    return os;
}
