#include "Functionalities.hpp"


int main(int argc, char const *argv[])
{

    CreateAccount();// act paisa 
    CreditAmount(500);
    DebitAmount(10000);
    CreditAmount(1000);
    RollBack();
    CheckCurrentBalance();
    RollBack();
    CheckCurrentBalance();
    RollBack();
    CheckCurrentBalance();

    return 0;
}





