/*

    week 2 : 

    function pointers 
    function wrapper 
        - a way to capture any callable in a type-erased way
        - it can be used for following
            - pass a callable as a parameter
            - return a callable as a value
            - save functions as "values" in container/variable
        
    reference_wrapper
        - it is an object that internally stores reference to "something"
        - it uses pointer to reference conversion internally
        - it can be replacement for raw reference everywhere in the code
        - rvalues cannot be converted to reference wrapper -- in class move and move assignment is deleted

    std::bind
        - used to create a pariial function
            - a function some parameters are already fixed
        
        - redesign or tweak the sequence of parameters by swapping or repositioning them as per requirement 
        
*/



#include<iostream>
#include<functional>

//reference wrapper example
// int magic(){
//     int n = 10;
//     return n;
// }

// int main(int argc, char const *argv[])
// {
//     std::reference_wrapper<int> ref = magic(); // cannot convert rvalue to lvalue
//     std::cout << ref.get();
//     return 0;
// }

/*

*/
