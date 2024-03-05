#include <iostream>

/*
    * Must have Subjects *
    OS
    Databases
    CN
    Computer Architecture
    Distributed Computing -- optional
*/

/*
    any form of data that is not preserved 
    in a fixed location in memory will disappear
    at the end of the expression (full expression)
    where it originated

    like 
    10;temporary(rvalue) --> after ";" then its existances removed
*/


int main()
{

    /* code */
    /*
        until memory not assign --> temporary
        memory assign --> persist (means it stays)
    */
    //rvalues
    10;
    "gourav";
    std::vector<int> {1,2,3}; // all three are purely r values // which do not going to assign anyone
    
    //make int for test
    int n1 = 4;

    //lvalues
    int *ptr = &n1; // permantly exist in addr with 8byte // here n1 is rvalue

    return 0;
}
