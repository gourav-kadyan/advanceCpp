#include "Functionalities.hpp"

Account *acc;

void CreateAccount(){
    double amount;
    std::cin >> amount;
    std::string name;
    std::cin >> name; 
    unsigned int age;
    std::cin >> age;
    // Month month,
    unsigned int year; 
    std::cin >> year;
    int n;
    std::cout << "\n Tell Your Gender 1 -> Male 2 -> Female : ";
    std::cin >> n;
    GenderType gt;
    if(n == 1){
        gt = GenderType::Male;
    }
    else if(n == 2){
        gt = GenderType::Female;
    }
    else{
        throw std::runtime_error("Only type 1 and 2 for Gender");
    }
    Month m;
    std::cout << "\n Tell Month 1 to 12 for Jan to Dec : ";
    std::cin >> n;
     if (n == 1) {
        m = Month::Jan;
    } else if (n == 2) {
        m = Month::Feb;
    } else if (n == 3) {
        m = Month::Mar;
    } else if (n == 4) {
        m = Month::Apr;
    } else if (n == 5) {
        m = Month::May;
    } else if (n == 6) {
        m = Month::Jun;
    } else if (n == 7) {
        m = Month::Jul;
    } else if (n == 8) {
        m = Month::Aug;
    } else if (n == 9) {
        m = Month::Sept;
    } else if (n == 10) {
        m = Month::Oct;
    } else if (n == 11) {
        m = Month::Nov;
    } else if (n == 12) {
        m = Month::Dec;
    } else {
        throw std::runtime_error("Give proper Input(1 to 12 )for Month");
    }
    long long house_number;
    std::cin >> house_number;
    std::string locality; 
    std::cin >> locality;
    std::string district;
    std::cin >> district;
    std::string state;
    std::cin >> state;
    //GenderType gender

    //PtrAccount {std::make_shared<Account>(amount,name,m,year,age,house_number,locality,district,state,gt)};
    acc = new Account(amount,name,m,year,age,house_number,locality,district,state,gt);
    
}

void ShowAccountDetails(){
    std::cout << *acc << "\n";
    //delete acc;
}

void DeleteAccount(){
    delete acc;
}
