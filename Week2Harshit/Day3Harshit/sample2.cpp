#include <iostream>
#include <functional>

class Action
{
private:
    /* data */
    int m_id;
public:
    Action(/* args */) {
        m_id = 4;
    }
    ~Action() {}

    void Operation(int number ) { std::cout << m_id * number;}
};

int main(int argc, char const *argv[])
{
    Action obj;
    auto binded_operation = std::bind(&Action::Operation, obj, 40); // & is mandatory on className
    binded_operation(); // obj.Operation(40)
    return 0;
}

/*
a non static member class --> & is mandatory
*/
