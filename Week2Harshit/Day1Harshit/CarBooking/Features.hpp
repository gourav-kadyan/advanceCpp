#ifndef FEATURES_HPP
#define FEATURES_HPP
#include "Account.hpp"
#include <vector>

using AccountCotainer = std::vector<Account*>; 






class Features
{
private:
    /* data */
public:
    
    Features(/* args */) = delete;
    Features(const Features&) = delete;
    Features(Features&&) = delete;
    Features& operator=(const Features&) = delete;
    Features& operator=(Features&&) = delete;

    /*
        it should accept of reference 
        an enum to decide type of account, Account*
        then accept input and call the constructor and store pointer
        in accountContainer
    */

    static void CreateObject(AccountCotainer& account, AccountType accountType);

    ~Features() {}
};



#endif // FEATURES_HPP
