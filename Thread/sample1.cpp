/*  WAYS TO CREATE THREAD IN CPP*/
#include<iostream>
#include<thread>


void fun(int x){
    while(x-- > 0){
        std::cout << x << std::endl;
    }
}

int main(){

    std::thread t1(fun,11);
    
    //using lamda funciton

    auto lambda = [](int x){
        std::cout << x << std::endl;
    };

    std::thread t2(lambda,11);


    //WE CAN DIRECTLY INSERT LAMBDA INTO THREADLIKE THIS

    std:



    return 0;
}