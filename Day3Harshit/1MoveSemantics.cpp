#include <iostream>
#include <vector>


/* 
    we create vecotr in main (scope in main)
    Heap
    [1,2,3,4, 5|  |  |  |  ]
    ^         ^            ^
    |         |            |
    |         |            |
    [ 0x00H | 0x116    | 0x132 ] 
    <----------Main variable-----> 24 bytes
*/

/*
    1 - program starts because OS schedules the process
    2 - Main function is executed as a thread by OS
    3 - Vector of integers values is created in the scope of Main
        a - Heap allocation happens and vector gets space on heap
        b - pointers to start, end and capacity are recorded in the vector object "value" in main
    4 - Magic(std::move(value))
        a - std::move(value) : It converts lvalue into rvalue (tells the compiler "value" vector can be prepared
            for move)
        b - Now vector "value" is treated as a rvalue so magic(std::move(value)) becomes
            Magic(std::vector<int> {1,2,3,4,5}) //without name means its in rhs or ready to move

*/


/*
    numvers passed to magic must always be temporary value or moved values

    capture parameter by rvalue reference 

    CPPCON --> after move success --> do not access the source --> coz you already move
*/

void Magic(std::vector<int> &&data){

}
std::vector<int> move(std::vector<int> &v){
    return v;
}
int main(int argc, char const *argv[])
{
    std::vector<int> value {1,2,3,4,5};
    Magic(move(value)); // done move sucessfully complete vector class is designed to move semantics

    std::cout << value.size() << "\n"; //dont do this it give  unpredictable / undefined behaviour like you are
                                        // going to your ex
    10;
    return 0;
}
