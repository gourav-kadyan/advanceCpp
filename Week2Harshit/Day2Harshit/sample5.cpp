#include<iostream>
#include<vector>
#include<functional>
#include <memory>

//// CONVERTED --> SAMPLE4 CODE TO SMART POINTER ( SHARED POINTER )

class Employee
{
private:
    /* data */
    std::string m_name;
    int m_id;
    float m_salary;
public:
    Employee() = delete;
    Employee(const Employee&) = delete;
    Employee(Employee&&) = delete;
    Employee& operator=(const Employee&) = delete;
    Employee& operator=(Employee&&) = delete;

    Employee(int id, std::string name, float salary)
    :m_id(id), m_name(name), m_salary(salary)
    {}

    float operator+(const Employee& rhs){
        return m_salary  + rhs.m_salary;
    }

    float operator-(const Employee& rhs)
    {
        return m_salary - rhs.m_salary;
    }

    float salary() const { return m_salary; }

    void operator()(){
        std::cout << "Tax for this employee at 10%: " << m_salary*0.01f << '\n';
    }
    
    ~Employee() {}

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
};

std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    os << " m_name: " << rhs.m_name
       << " m_id: " << rhs.m_id
       << " m_salary: " << rhs.m_salary;
    return os;
}

/*
 Objective : take a container of raw pointers to Employee and filter and print details based on predicate passed
*/
using EmployeePtr = std::shared_ptr<Employee>;


void Adaptor(const std::vector<EmployeePtr> & v, std::function<bool(const EmployeePtr&)> predicate){
    for(EmployeePtr it : v){
        if(predicate(it)){
            std::cout << *it << '\n';
        }
    }
}



int main(int argc, char const *argv[])
{

    std::vector<EmployeePtr> container {
        std::make_shared<Employee>(123, "Gourav", 345345.0f),
        std::make_shared<Employee>(234, "Aycush", 23424),
        std::make_shared<Employee>(2345, "noice", 1234)
    };

    Adaptor(
        container, 
        [](const EmployeePtr& em){
           if(em)
              return em->salary() > 8000;
            return false;
        }   
    );



    return 0;
}
