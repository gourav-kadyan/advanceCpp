#include <iostream>
#include <functional>

/*
    the actual data type of a lamda is unknown
*/

class function_wrapper{
    private:
    //function f; // -- lamda is saved to this member

    //operator () overloaded --> operator(f());like this
};

void Magic(std::function<void(int)> fn){}

int main(int argc, char const *argv[])
{
    auto f1 = [](int number){ std::cout << number * 10 ;}; //f1 is a object
    //lamda is a one time used 
    f1(10);//like a function, overload () operators

    Magic([](int number){ std::cout << number * 10 ;});

    return 0;
}
