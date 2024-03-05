#include<iostream>

//small implementaion of lamda function

class LamdaImplementation
{
private:
    /* data */
    // int number; //to be discussed
public:
    LamdaImplementation(/* args */) = default;
    ~LamdaImplementation() = default;

    //function call () operator [paren paren]

    void operator()(int number){
        std::cout << "cube of num is : " << number * number * number << "\n";
    }
};

int main(int argc, char const *argv[])
{
    LamdaImplementation l1;
    l1(10); // operator overload
    
    return 0;
}

/*
    lamda operation --> like operator oveload of ()
*/