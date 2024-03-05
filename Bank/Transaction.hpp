#ifndef TRANSACTION_HPP
#define TRANSACTION_HPP
#include "Account.hpp"

class Transaction : public Account
{
private:
    /* data */
public:
    Transaction() {};
    Transaction(Transaction&&) = delete;
    Transaction(const Transaction&) = delete;
    Transaction& operator=(Transaction&&) = delete;
    Transaction& operator=(const Transaction&) = delete;

    void Credit(float amount);
    void Debit(float amount);

    void CurrBalance();

    ~Transaction() = default;
};

#endif // TRANSACTION_HPP
