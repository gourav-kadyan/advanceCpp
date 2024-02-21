/*
Const Keyword Rule
	1 - const is applied to the token(set of char. that has meaning in progrmming like int) on its immediate 
	left.
	If there is nothing to the left of const, apply const on the token to its immediate right
	
	2 - pointer symbol * is considered a separate token 

    3 - by memeber function const at the end of declaration --> means its safe for const object
        because it function promise that its not going to change data member
*/

#include<iostream>
#include<string>

class dummy
{

private:
    int m_id {0};
    float m_salary;
public:
    dummy() = delete;
    dummy(int id,float salary):m_id(id),m_salary(salary){}
    ~dummy() = default;
    
};


int main()
{   //scenario 1 : 
    const int n1 = 10;//n1 is a constant int
    int const n2 = 20;//n2 is a const int 

    // //scenario 2 : 
    int x = 0;
    int y = 10 ;
    const int *p = &x;//p is a pointer to a constant int
    
    x = 100 ;
    int *const ptr = &x; // ptr is a constant pointer to a int
    *ptr =100 ;
    // ptr = &y ; 
    const int *const ptr2 = &x; // ptr2 is a constant pointer to a constant int


    //const working on class
    dummy obj(1,2);//under normal classes it is read only
    return 0;
}

