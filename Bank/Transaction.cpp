#include "Transaction.hpp"

void Transaction::Credit(float amount)
{
    setCurrentBalance(currentBalance()+amount);
}

void Transaction::Debit(float amount)
{
    setCurrentBalance(currentBalance()-amount);
}

void Transaction::CurrBalance()
{
    std::cout << "Current balance is : " << currentBalance() << "\n";
}


