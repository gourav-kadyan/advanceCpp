/*

    objective : Create a adaptor which takes
    1 - a callable of the following signature
        Input : int and int
        Output : void
    2 - Integer number n1
    3 - Intefer number n2

    the adpator must apply/map the callable on the 2 and 3 integer
*/
#include <iostream>
#include <functional>

/*
    adaptor is a higher order function that accept
    a- a function wrapper for all functions that have a following signature
        1 - int, int input parameter
        2 - void as a return types
    and 2 integer by value
*/

/*
as long as signature match function wrapper can catch any function 
*/
void Adaptor( std::function<void(int,int)> fn , int n1, int n2){
    fn(n1,n2);
}

void f1(int a, int b){
    std::cout << a * 10 * b << '\n';
}

int main(int argc, char const *argv[])
{

    Adaptor(
        [](int a, int b){ std::cout << a + b << '\n';},
        5,
        10
    );

    Adaptor(
        [](int a, int b){ std::cout << a - b << '\n';},
        50, 
        10
    );    

    Adaptor(
        f1,
        10,
        20
    );

    return 0;
}
