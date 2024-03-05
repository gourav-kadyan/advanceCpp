//taxpayers : Employee, BusinessOwners


/*
    want to solve a problem and know that there are fixed child classes --> use variant
*/
#include<iostream>
#include<variant> //cpp17 feature
#include<array>

/*
    Algebraic Data Type(ADT) 

    variant is one such ADT
    variant is like type safe union --> up of union
    in variant only one is active 


    there is no relation between object creation --> after object creation --> then variant come into a picture
*/


class BusinessOwner
{
private:
    std::string m_name;
    std::string m_company_gst;
    float m_revenue;
    float m_expenses;
public:

    float CalculateTaxAmount() { return 0.3 * (m_revenue - m_expenses);}
    BusinessOwner(std::string name, std::string gst, float revenue, float expenses):m_name{name}, m_company_gst{gst}, m_revenue{revenue}, m_expenses{expenses} {}
    ~BusinessOwner() = default; // if no member is pointer

    std::string name() const { return m_name; }

    std::string companyGst() const { return m_company_gst; }

    float revenue() const { return m_revenue; }

    float expenses() const { return m_expenses; }

    
};

class Employee
{
private:
    std::string m_name;
    float m_salary;
public:
    Employee(std::string name, float salary):m_name{name}, m_salary{salary} {}
    ~Employee() = default;

    std::string name() const { return m_name; }
};

/*
    I want to use std::array as a container of variants where each variant is either of type Employee POinter
     or BusinessOwner pointer
*/
using Vtype = std::variant<Employee*, BusinessOwner*>;//always use after the class exist
using Container = std::array<Vtype,2>;

//for each variant in the array -->  visit the variant open it --> start --> whatever you find start says at val
//now using the val pointer call--> name
void CommonAction(Container& arr){
    for(Vtype it : arr){
        std::visit(
            [](auto&& val){
                std::cout << val->name() << '\n';
            },
            it
        );
    }
}

/*
    auto&& --> template parameter for lambda
*/

/*
    for each vtype (variant) called "it"
    1 - open variant and check if "it" holds an alternative of type BusinessOwner*
    2 - if yes get data from slot 1 of the variant because slot 1  if for BusinessOwner*
    3 - Now, Save this to variable and access revenue
*/
void UnCommonAction(Container& arr){
    for(Vtype it : arr){
        if(std::holds_alternative<BusinessOwner*>(it)){
            BusinessOwner* own =  std::get<1>(it);
            std::cout << own->revenue() << '\n';
            std::cout << std::get<1>(it)->revenue() << '\n';
        }
    }
}

int main(){

    Employee *emp = new Employee("Gourav", 5000000.0f);
    BusinessOwner* owner = new BusinessOwner("XYZ", "123fsk123", 100, 50);

    Container arr {emp, owner}; //this concept called functional polymorphism

    /*

        -- You dont know which variant which is empty or which fills

        employee           businessowner           employee              businessowner
        [    0x2345H     |  /// empty///   ]     [ ///////////  empty   |  0x234H          ]



        scenario 1 : I want to execute a function that is present in all types of the variant
                     e.g: getter for name ----> easy

                     for every variant in array call geeter for name and print

        scenario 2 : You want to call a function that only exist in sume but not all types in the variant
                     e.g. : revenue in business owner 

                    IN array --> Open variant --> if the variant has a businessowner then print else proceed to another 
    */    


    CommonAction(arr);  
    UnCommonAction(arr);    

    return 0;
}