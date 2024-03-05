#include "Functionalities.hpp"

int main(int argc, char const *argv[])
{
    Container obj;
    ProjectContainer pr;
    
    CreateObjects(obj,pr);
    
    std::cout << MaxBudget(obj) << '\n';
    return 0;
}




/*

    void fn(int &n){}

    fn(4)//compiler error

    int& arr[]
    int& == int

    int x= 10;
    int a = x;

    int& a = x;

    reference wrapper --> 


    int& arr[&n, &n1]
*/