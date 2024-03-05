#include "Functionalities.hpp"

Account* acc;

std::stack<float> st;

void CreateAccount(){
    std::string name ; 
    float bal ; 
    std::cout << "Enter your Name -> "; 
    std::getline(std::cin ,name) ;
    std::cout << "\nEnter Balance to  get started with -> "; 
    std::cin >> bal ; 

    acc = new Account(name, bal);
}

void CreditAmount(float amount){
   acc->setCurrentBalance(acc->currentBalance()+amount);
   std::cout << amount << " has Been Credited to your Account\n";
   std::cout << "Current Balance is : " << acc->currentBalance() << "\n";
   st.push(amount);
}

void DebitAmount(float amount){
   acc->setCurrentBalance(acc->currentBalance()-amount);
   std::cout << amount << " has Been Debited to your Account\n";
   std::cout << "Current Balance is : " << acc->currentBalance() << "\n";
   st.push(-1*amount);
}

void CheckCurrentBalance(){
    std::cout << "Current Balance is : " << acc->currentBalance() << "\n";
}

void RollBack(){
    acc->setCurrentBalance(acc->currentBalance()-st.top());
    std::cout << abs(st.top()) << " Money has Been Rollback\n";
    std::cout << "Current Balance is : " << acc->currentBalance() << "\n";
    st.pop();
}

