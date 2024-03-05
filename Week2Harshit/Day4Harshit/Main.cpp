#include "Functional.hpp"

void line(){
    std::cout << "\n\n***************************************************************************\n\n";
}

int main(int argc, char const *argv[])
{
    Container obj {1,2,3,5};

    try
    {
        line();
        Adaptor(firstEle, obj);
        line();
        Adaptor(lastEle, obj);
        line();
        Adaptor(sizeOfcontainer, obj);
        line();
        Adaptor([](Container& data){ std::cout << "First Ele : " << data[0] << " Second Ele : " << data[1];}, obj);
    }
    catch(const std::runtime_error& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    return 0;
}
