#include <iostream>

int add(int a, int b){
    return a + b;
}


int main(int argc, char const *argv[])
{
    std::cout << add(5,6) << "\n";
    return 0;
}

/*
    g++ -E demo.cpp > output

    preprocessing 

    if program contain multiple file --> multiple object file

    g++ -c demo.cpp -o demo.o --> preprocessing and interpretation mean object file created
*/