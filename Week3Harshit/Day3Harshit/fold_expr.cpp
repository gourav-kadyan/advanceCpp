#include<iostream>

/*
    Accept infinite parameters
    add 1 parameter with remaining
*/


template <typename... T>
auto add(T... n1){
    return (n1 + ...);//right associative operation
}

template<typename... T>
auto Subtract(T... args){
    return (args - ...);//ex = sub(10,20,30,40) ==> (10 - (20 - (30 - 40)))
    //return (... - args);//ex = sub(10,20,30,40) ==> ( ((10 - 20) - 30) - 40) //left associative
}

int main(){
    std::cout << add<int>(10,20) << "\n";
    std::cout << add<int>(10) << "\n";
    std::cout << add<int>(10,20,2,2,3,34,223,342,3) << "\n";
    std::cout << Subtract<int>(10,20,2342,2,3,42,2343) << "\n";
    std::cout << Subtract<int>(10,20,2342,2,3,42,2343) << "\n";
}