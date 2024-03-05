// #include <iostream>

// class example{
// private:
//     std::string m_name;
//     int m_id;

// public:
//     example(int id, std::string name) : m_id(id), m_name(name){}
//     ~example() {}
// }

// void Dummy(){
//     example *ex = new example(10, "Gourav"); // raw pointer --> need to manage the pointer like delete the pointer 
//                                                 // after use

//     int n {0};

//     std::cin >> n;
//     std::cout << 10/n;

//     delete ex;
// }

// int main(int argc, char const *argv[])
// {
//     /* code */

//     try{
//         Dummy();
//     }
//     catch(std::exception &ex){} // if exception happen then we dont delete the pointer 

//     //main problem it is very dificult to handle the pointer

//     return 0;
// }


//after using share ptr

#include <iostream>
#include <memory>

class example{
private:
    std::string m_name;
    int m_id;

public:
    example(int id, std::string name) : m_id(id), m_name(name){}
    ~example() {}
};

void Dummy(){
    //std::shared_ptr<example> ex {new example(10, "Gourav")}; // raw pointer --> need to manage the pointer like delete the pointer 
                                                   // after use
    //better coz new and delete is not recommended
    std::shared_ptr<example> sptr {std::make_shared<example>(10,"Gourav")}; // make shared do the new keyword 
    int n {0};

    std::cin >> n;
    std::cout << 10/n;

}

int main(int argc, char const *argv[])
{
    /* code */

    try{
        Dummy();
    }
    catch(std::exception &ex){} // if exception happen then we dont delete the pointer 

    //main problem it is very dificult to handle the pointer

    return 0;
}
