#include <iostream>

class dummy
{
private:
    /* data */
public:
    dummy(/* args */) {}
    void show() noexcept{
        std::cout << "hello" << std::endl;
        
    }
    ~dummy() {}
};


int main(){

    dummy d;
    d.show();

    return 0;
}