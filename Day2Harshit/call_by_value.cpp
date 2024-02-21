#include <iostream>

void Magic(int value){
    std::cout << "Value in Magic b4 modification is : " << value << "\n";
    std::cout << "Address of value b4 modification is inside Magic is : " << &value << "\n";
    value = 111;
     std::cout << "Value in Magic after modification is : " << value << "\n";
    std::cout << "Address of value after modification is inside Magic is : " << &value << "\n";
}

int main(){
    int value = 100;
    std::cout << "Value b4 modification is : " << value << "\n";
    std::cout << "Address of value b4 modification  is : " << &value << "\n";
    Magic(value);
    std::cout << "Value in after modification is : " << value << "\n";
    std::cout << "Address of value after modification  is : " << &value << "\n";
    return 0;
}