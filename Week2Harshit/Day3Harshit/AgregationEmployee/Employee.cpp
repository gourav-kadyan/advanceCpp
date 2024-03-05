#include "Employee.hpp"

Employee::Employee(std::string emp_id, double salary, EmployeeType emp_type, ProjectRef project)
:m_emp_id{emp_id}, m_salary{salary}, m_emp_type{emp_type}, m_project{project}
{}

std::ostream &operator<<(std::ostream &os, const Employee &rhs) {

    std::string val {""};
    if(rhs.m_emp_type == EmployeeType::Fulltime){
        val = "FullTime";
    }
    else if(rhs.m_emp_type == EmployeeType::Intern){
        val = "Intern";
    }
    else{
        val = "PartTime";
    }
    
    os << "m_emp_id: " << rhs.m_emp_id
       << " m_salary: " << rhs.m_salary
       << " m_emp_type: " << val
       << " m_project: " << rhs.m_project;
    return os;
}
