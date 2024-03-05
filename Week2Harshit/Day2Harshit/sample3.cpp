/*

    Objective: Design an adaptor to accept 
                a vector of integers
                a predicate (a function that returns  true or false based on a single input)
*/

//a predicate that returns only true or false based on inputs 

#include <iostream>
#include <functional>
#include <vector>

void Adaptor(const std::vector<int>& v, std::function<bool(std::vector<int>)> fn ){
    std::cout << fn(v) << '\n';
}

int main(int argc, char const *argv[])
{
    Adaptor(
        {1,2,3,4,5},
        [](std::vector<int> v){
            for(int it : v){
                if(it % 2 == 0){
                    return true;
                }
            }
            return false;
        }
    );

    Adaptor(
        {1,2,3,4,5},
        [](std::vector<int> v){
            for(int it : v){
                if(it % 3 == 0){
                    return true;
                }
            }
            return false;
        }
    );

    Adaptor(
        {1,2,3,4,5},
        [](std::vector<int> v){
            for(int it : v){
                if(it % 7 == 0){
                    return true;
                }
            }
            return false;
        }
    );
    
    return 0;
}
