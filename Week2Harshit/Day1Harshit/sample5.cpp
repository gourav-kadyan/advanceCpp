/*
    TOPIC -- REFERENCE WRAPPER
*/

/*
    No.           Identifier Name                    Address            Content             Alternate Names
    1               n1                                0x999f              10                    ref, argRef
    2               data                              0x090h              10                    r1, r2
*/

/*

    Problem:

    for reference -- container dont created like ref of array but it give error

    A reference doesnot exist in anywhere in memory


    reference of refernce is illegal --> it dont give error but just another name of values added in table 
    like see above table

*/

#include<iostream>
#include <vector>
void Magic(int &argRef){

}

int main(int argc, char const *argv[])
{
    int n1 = 10;
    int& ref = n1;// creating reference
    const int &x = 10;
    Magic(n1); //call by reference
    
    int data = 10;
    int &r1 = data;
    int &r2 = r1;//reference of reference

    return 0;
}

/*
    void fn(int a);
    fn(10) --> int a = 10;

    Previously:

    A pointer when stored internally in an object creates representation of a pointer(smart pointer)

    A reference stored in a object internally creates representation of a reference called reference_wrapper
*/
