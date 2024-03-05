#include<iostream>
#include<functional>
#include<vector>

/*
    lamda function --> is temporary function --> work as rvalue in functions

*/


void Operation(const std::vector<int>& data , std::function<void(int)> fn)
{ // it is cpp version
    for(int val : data){
        fn(val);
    }
}

//dont use by reference in function wrapper 
//the square -- capture close --> used for creating lamda closure


int main()
{
    // void square(int number)
    // {
    //     std::cout << "sq of num is : " << number * number << "\n";
    // }   --> not allowed fn in fn

    // so we make lamda function

    // [](int number) -> void
    // {
    //     std::cout << "sq of num is : " << number * number << "\n";
    // } --> this is lamda function



    
    Operation( 
        {1,2,3,4,5} ,
        [](int number) -> void
        {
            std::cout << "sq of num is : " << number * number << "\n";
        }

    );
    // not efficient as above one coz scope is main and above scope is Operation
    auto f1 = [](int number) -> void
        {
            std::cout << "cube of num is : " << number * number * number << "\n";
        };

    std::vector<int> data {1,2,3};
    Operation(data, f1);

    return 0;
}