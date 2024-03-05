#include<iostream>
#include<list>

//call by lvalue
//call by rvalue

void Magic(std::list<int>&data){

}

/*
    1 - WeirdMagic can only be called by a rvalue 
        it means the user will never be able to copies One in caller(Main) 
        function and one in callee(WeirdMagic) function
    
    2 - Thats a great way to optimize memory
*/

void WeirdMagic(std::list<int>&&data){
    std::cout << data.size() << "\n";
}


int main(int argc, char const *argv[])
{   
    /* code */
    std::list<int> l1 {1,2,3,4,5};
    Magic(l1); //call by lvalue reference
    WeirdMagic(std::list<int> {1,2,3,4,5}); // call by rvalue reference 
    // if you want to preserve the data so you have to bind it to memory address else at the ";" it destroyed
    //thats why we move to func using move semantics WeirdMagic(std::list<int> &&data) // now Weird Magic 
    // controls the life of data 
    //semantics -- we see lifetime, ownership, etc

    return 0;
}
