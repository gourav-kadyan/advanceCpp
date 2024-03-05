/*
    withdraw : withdraw takes 10 units of mony from amount.
    deposit : add 10 units of money to amount

    Run withdraw and deposit Both  100 times each on an intitial amount of 10000

    what will be the final amount after 200 transactions are completer? 
*/

#include<iostream>
#include<thread>
#include<functional>
#include<mutex>

int amount = 1000;
std::mutex mt;

void withdraw(){
    int n = 100;
    while(n--){
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        mt.lock();
        amount -= 100;
        mt.unlock();
    }
}

void deposit(){
    int n = 100;
    while(n--){
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        mt.lock();
        amount += 100;
        mt.unlock();
    }
}

int main(int argc, char const *argv[])
{
    
    
    
    std::thread t1(&withdraw);
    std::thread t2(&deposit);

    t1.join();
    t2.join();
    

    std::cout << "amount : " << amount << "\n"; 

    return 0;
}
