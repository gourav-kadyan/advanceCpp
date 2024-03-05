#include "Functional.hpp"

void Adaptor(Fntype fn, Container &data)
{
    if(data.empty()){
        throw std::runtime_error("Data is Empty");
    }
    fn(data);
}

Fntype firstEle = [](Container& obj){
    std::cout << obj.front() << "\n";
};

Fntype lastEle = [](Container& obj){
    std::cout << obj.back() << "\n";
};

Fntype sizeOfcontainer = [](Container& obj){
    std::cout << obj.size() << '\n';
};

