#include <iostream>
#include <functional>
#include <array>

/*
    objective : 
        design an adaptor function that accepts a container of function wrappers and a container of data values
        Map each function on each item in data container and print the output

    #all function must accept only an integer and return void
*/

//Mine
// using Container = std::vector<std::function<void(int)>>;

// void Adaptor(Container x, std::vector<int> v){
//     int n = v.size();
//     for(int i=0;i<n;i++){
//         x[i](v[i]);
//     }
// }

// int main(){
//     auto fn = [](int n) { std::cout << n << "\n"; };
    
// }


//Harshit

using fntype = std::function<void(int)>;
using DataContainer = std::array<int,5>;
using FnContainer = std::array<fntype,3>;

void Adaptor(const FnContainer& fns,const DataContainer& data){
    //loop over fns, nested loop over data, apply fn on data
    for(const fntype fn : fns){
        for(int val : data){
            fn(val);
        }
    }
}

int main(int argc, char const *argv[])
{
    FnContainer fns {
        [](int number) { std::cout << number*number << '\n';},
        [](int number) { std::cout << number*2 << '\n';},
        [](int number) { std::cout << number*10 << '\n';}
    };

    DataContainer data { 1, 2, 3, 4, 5};
    Adaptor(
        fns, data
    );
    return 0;
}
