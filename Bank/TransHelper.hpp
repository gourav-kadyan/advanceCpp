#ifndef TRANSHELPER_HPP
#define TRANSHELPER_HPP
#include "Transaction.hpp"

class TransHelper : public Transaction
{
private:
    /* data */
    Account* m_acc;
public:
    TransHelper(/* args */) = delete;
    TransHelper(TransHelper&&) = delete;
    TransHelper(const TransHelper&) = delete;
    TransHelper& operator=(const TransHelper&) = delete;
    TransHelper& operator=(TransHelper&&) = delete;

    TransHelper(Account* acc);

    ~TransHelper(){
        delete m_acc;
    }
};

#endif // TRANSHELPER_HPP

