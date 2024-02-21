#include <iostream>
#include <vector>

/*
    Magic is a function that accept 1 stud vector of integers by value 
    Magic returns void 
*/

void Magic(std::vector<int> data){

}

int main(int argc, char const *argv[])
{
    std::vector<int> v {1,2,3};
    Magic(std::vector<int> {1,2,3,4,5});
    Magic(v);
    return 0;
}

/*
    std::vector<int> data = std::vector<int> {1,2,3,4,5} // you just initializing the data there is no transferring
    data
*/
