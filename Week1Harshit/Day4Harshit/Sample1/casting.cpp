#include <iostream>


class parent
{
private:
    /* data */
public:
    parent(/* args */) {}
    virtual ~parent() {}
    virtual void Magic() = 0;
};

class child : public parent
{
private:
    /* data */
public:
    child(/* args */) {}
    ~child() {} //marking child destructor as virtual is optional

    void Magic(){ std::cout << "Jaadu\n"; }

    void display() { std::cout << "Child\n"; }
};

int main(int argc, char const *argv[])
{
    float f1  = 10.21f;
    // int n1 = (float)f1; // lossy conversion //c style cast; 

    //n1 = (float) "Nice"; // compile time error

    //if (//cast works ) do something
    //else do something  // in c its no possible

    int n1 = static_cast<int>(f1); //cpp style and also we can check 


    //dynamic cast 

    //converting pointer
    parent *p = new child(); //upcast

    p->Magic();

    //p->display();//give compiler error

    child *b = dynamic_cast<child*>(p);// downcast
    
    //checking if fails then give nullptr
    if(b){
        b->display();
    }

    std::cout << n1 << "\n";


    //converting to reference
    parent *ptr = new child();
    
    
    //check --> if fails give exception -- badcast i think
    //always check cornor case
    try{
        child& ch = dynamic_cast<child&>(*ptr);
        ch.display();
    }
    catch(std::bad_cast& e){
        std::cerr << e.what() << "\n";
    }
    
    


    return 0;
}
