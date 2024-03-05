#include<iostream>
#include<vector>
#include<functional>

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



void Adaptor(const std::vector<Employee*> & v, std::function<bool(Employee*)> predicate){
    for(Employee* it : v){
        if(predicate(it)){
            std::cout << *it << '\n';
        }
    }
}



int main(int argc, char const *argv[])
{

    std::vector<Employee*> container {
        new Employee(123, "Gourav", 345345.0f),
        new Employee(234, "Aycush", 23424),
        new Employee(2345, "noice", 1234)
    };

    Adaptor(
        container, 
        [](Employee* em){
           if(em)
              return em->salary() > 8000;
            return false;
        }   
    );



    return 0;
}
