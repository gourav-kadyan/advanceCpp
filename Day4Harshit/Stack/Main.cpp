#include<iostream>
#include "Stack.hpp"

int main(int argc, char const *argv[])
{
    Stack<int> s;
    try{
        s.Push(5);
        s.Pop();
        s.Pop();
    }
    catch(std::exception& ex){
        std::cerr << ex.what();
    }
    return 0;
}
