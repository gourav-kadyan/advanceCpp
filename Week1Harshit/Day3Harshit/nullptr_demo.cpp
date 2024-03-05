#include <iostream>

int main(int argc, char const *argv[])
{
    /* code */
    int* ptr = NULL; // 0
    int n = NULL;
    // 0x0000H pointer where nothing important
    // just 0000 value 

    //NULL : 0 0L 0o0 0b0000 0x0000 its problematic coz its confusing 
    // need dedicated keyword only used for pointers
    // in cpp type is important

    // so use nullptr its pointer specific only


    int* ptrx = nullptr; //give better programming hygiene
 
    //int x = nullptr; //give compilation error 

    return 0;
}
