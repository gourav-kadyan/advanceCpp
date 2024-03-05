/*
    TOPIC --> REFERENCE_WRAPPER
*/

//IMP --> In modern cpp --> dont use reference just use reference_wrapper

#include <iostream>
#include <functional>

void  Magic(int& ref){

}

int main(int argc, char const *argv[])
{
    int data {10};
    std::reference_wrapper<int> refWrap {data};
    Magic(refWrap);//implicit call of reference_wrapper to reference 
    std::reference_wrapper<int> arr[] {refWrap}; // with the help reference_wrapper you can do it

    return 0;
}
