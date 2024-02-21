// #include<iostream>

// class b1{
//     public:
//     b1(){
//         std::cout << "b1" << std::endl;
//     }
// };

// class b2{
//     public:
//     b2(){
//         std::cout << "b2" << std::endl;
//     }
// };

// class p1{
//     public:
//     int l = 4;
//     int m = 4;
    
// };

// class p2{
//     public:
//     int i= 5;
//     int j = 0;
    
// };

// class c:public p1,public p2{
//     public:
//     void show(){
//         std::cout << "child show" << std::endl;
//     }
//     c(){
//         std::cout << "c" << std::endl;
//         std::cout << this << std::endl;
//     }
// };

// int main(){
//     c obj;
//     p1 *a = &obj;
//     p2 *b = &obj;
//     std::cout << a << " " << b << " " << sizeof(int) << std::endl;
//     return 0;
// }

#include<iostream>
#include<string>



class Base {
private:
    /* data */
public:
    
    
};
class Derived:public Base
{
public:
    Derived(){
       std:: cout<<"Child consturctor\n";
    }
    
private:
    
};



int main()
{
    Derived d;
    Base b;

    return 0;
}