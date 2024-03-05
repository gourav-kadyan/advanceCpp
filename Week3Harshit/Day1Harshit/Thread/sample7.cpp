/*
    Create an array of 3 threads

    -thread 1 should calculate square of each number in the array and store in a result array (pos 1 to 5)
    -thread 2 should calculate cube of each number in the array and store in a result array (pos 6 to 10)
    -thread 3 should calculate factorial of each number in the array and sore in a result arrya (pos 11 to 15)

    Assumption : Numbers in the input array will be between 1 to 10;
*/

/* *******************BETTER VERSION FOUND IN SAMPLE 7******************************************/

#include<iostream>
#include<array>
#include<thread>
#include<mutex>
#include<functional>

using FnType = std::function<void(int)>;
using FnContainer = std::array<FnType,3>;


void CreateFunctionContainer(FnContainer& fx, std::array& data, std::array& store){
    fx[1] = [&](int x){
                x = 5;
                for(int number : data){
                    store[x] = number * number * number;
                    x++;
                }
            };
        
    fx[0] = [&](){
                x = 0;
                for(int number : data){
                    
                    store[x] = number * number;
                    x++;
                }
            }
    
}
void MapFunctionThreadContainer(){}

int main(int argc, char const *argv[])
{
   
    std::array<int,5> data {1,2,8,4};
    std::array<int,15> store;
    FnContainer fx;
    int x = 0;
    std::array<std::thread, 3> arr {
        std::thread (
            [&](){
                x = 0;
                for(int number : data){
                    
                    store[x] = number * number;
                    x++;
                }
            }
        ),
        std::thread(
            [&](){
                x = 5;
                for(int number : data){
                    store[x] = number * number * number;
                    x++;
                }
            }
        ),
        std::thread(
            [&](){
                x = 10;
                for(int number : data){
                    int res = 1;
                    if(number == 0){
                        res = 0;
                    }
                    while(number > 0){
                        std::lock_guard<std::mutex> lk(mt);
                        res *= number;
                        number--;
                    }
                    store[x] = res;
                    x++;
                }
            }
        )
    };

    for(std::thread& it : arr){
        if(it.joinable()){
            it.join();
        }
    }

    for(int it : store){
        std::cout << it << "\n";
    }

    return 0;
}
