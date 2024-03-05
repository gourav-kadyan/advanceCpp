/*
    RAII: 



*/
/*
    one object of the class will be responsible for one connection mechanism to the bank
    and use singleton class

*/
#include<iostream>
#include<thread>
#include<mutex>
#include<array>

class BankingOperation 
{
private:
    /* data */
    int m_amount {0};
    std::mutex mt;
    static BankingOperation* m_solo;
    BankingOperation(int amount):m_amount(amount) {}
public:
    
    BankingOperation() = delete;
    BankingOperation(const BankingOperation&) = delete;
    BankingOperation(BankingOperation&&) = delete;
    BankingOperation& operator=(const BankingOperation&) = delete;
    BankingOperation& operator=(BankingOperation&&) = delete;
    ~BankingOperation() {}

    void withdraw(){
        int n = 100;
        while(n--){
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
            std::lock_guard<std::mutex> lk(mt);
            m_amount -= 100;
        }
    }

    void deposit(){
        int n = 100;
        while(n--){
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
            std::lock_guard<std::mutex> lk(mt);
            m_amount += 100;    
        }
    }

    static BankingOperation* GetNewInstance(int amount){
        if(m_solo){
            return m_solo;
        }
        else{
            m_solo =  new BankingOperation(amount);
            return m_solo;
        }
    }

    int amount() const { return m_amount; }

};

BankingOperation* BankingOperation::m_solo {nullptr};

int main(int argc, char const *argv[])
{
    BankingOperation* obj = BankingOperation::GetNewInstance(500); //value initialization using {}

    std::array<std::thread,2> arr {
        std::thread(&BankingOperation::withdraw, obj),
        std::thread(&BankingOperation::deposit, obj)
    };

    for(std::thread &x : arr){
        //good practice before joining the thread plz check that is already join --> if not then segmentation fault 
        //and other things happen
        if(x.joinable()){
            x.join();
            std::cout << "Its working\n";
        }
    }

    std::cout << "The Final Amount is : " << obj->amount() << "\n"; 

    return 0;
}
