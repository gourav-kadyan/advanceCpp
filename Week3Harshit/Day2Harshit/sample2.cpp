// *************************** VARIADIC TEMPLATES ********************************************

//mostly used by meta programmers ==> like compiler programmer
//situation where your code write more code --> meta programming

#include<iostream>

/*
    add is a function that takes 2 parameters of type "Int"
    It uses them as operands for binary + operator and return
    the result of + operator applied on these operands
*/

template <typename T>

T add(T n1, T n2){
    return n1 + n2;
}



//use recursion On Template

template <typename T>
T add(T n){
    return n;
}

template<typename T , typename... R>
T add(T n1, R... args){
    return n1 + add(args...);
}

// template <typename T>
void print(std::string n){
    std::cout << n ;
}

template<typename T , typename... R>
void print(T n1, R... args){
    // print(n1);   
    std::cout << n1 ; 
    print(args...);
}

int main(){
    std::cout << add<int>(10,20) << '\n';
    std::cout << add<float>(10.21f,1023.23f) << '\n';
    std::cout << add<int>(5) << '\n';
    std::cout << add<int>(1,233,34,2,23,4,2,2,3,4,2,2,3,234,2) << '\n';


    print<std::string>("lskdjlfj",1234,"ksjdhfisjk");
}