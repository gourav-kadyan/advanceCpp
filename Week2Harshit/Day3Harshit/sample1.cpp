#include <iostream>
#include <functional>
#include <list>
#include <cstring>

//BIND

/*
    Problems-

    we cannot Massively change code after it is deployed for client

    sometimes Api parameters need to be fixed a certainvalue
*/


void formula(const int x, const int y, const int z){
    std::cout << "Answer is : " << ((x+y)-z) << '\n';
}

void Magic(const std::list<int>& data, int n){

    for(int val : data){
        n--;
        if(n == 0){
            std::cout << val << "\n";
            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    //formula(10,20,30);

    //set value of x is 100 forever
    //bind is like class object too.in backend one class is made and bind work with it
    auto binded_formula = std::bind( &formula, 100, std::placeholders::_1, std::placeholders::_2);
    binded_formula(30,40);
    binded_formula(100,30,40); //give extra argument then it discarded but if we change in parameter giving 
    //extra means compilation error 

    auto binded_magic = std::bind( &Magic, std::placeholders::_2, std::placeholders::_1);
    
    //strcpy changes to correct
    auto binded_strcpy = std::bind( &strcpy, std::placeholders::_2, std::placeholders::_1);
    char *msg;
    msg = new char[7];
    binded_strcpy("gourav", msg);

    //lamda is an object . using & on a lamda means taking address of object. dont use & sign with lamda in bind
    auto fn = [](int number, int factor) { std::cout << number * factor << '\n'; };
    auto bind_lambda_fn = std::bind(fn, std::placeholders::_1, 40);
    bind_lambda_fn(100);//call (100,40)
    bind_lambda_fn(100,40);//call (100,40)
    bind_lambda_fn(100,40,100);//call (100,40)

    return 0;
}

/*
    void magic(const int n, std::string& name);
    std::function< void(const int, std::string&)> fn = &magic; //const , & and other are also part of datatype
*/

/*
    bind is also same as lambda as per the sign or datatype --> lambda is unpredictable and same as bind
*/

/*
    void Magic(){.///}

    std::function<void()> fn = Magic;
    //means of this line --> please take the  address of the function first instruction to the fn

    in a function also know it store the address of the first instruction same as array
*/


//ashish.rawat@kpit.com  -- head of PMT
