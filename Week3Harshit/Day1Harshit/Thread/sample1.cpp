#include<iostream>
#include<array>
#include<thread>

// delay


void Square(std::array<int,5>& data){
    for(int number : data){
        //use artificial delay
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "Square of : " << number << " is : " << number * number << '\n';
    }
}

void Cube(std::array<int,5>& data){
    for(int number : data){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "Cube of : " << number << " is : " << number * number * number << '\n';
    }
}

int main(int argc, char const *argv[])
{
    std::array<int,5> arr {1,2,3,4,5};

    Square(arr);
    Cube(arr);
    
    return 0;
}
