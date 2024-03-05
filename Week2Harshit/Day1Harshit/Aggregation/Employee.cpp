#include "Employee.hpp"

Employee::Employee(std::string employee_id, std::string ename, double salary, std::reference_wrapper<Project> pr)
:m_employee_id{employee_id}, m_ename{ename}, m_salary{salary}, m_employee_project{pr} 
{}


std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    os << "m_employee_id: " << rhs.m_employee_id
       << " m_ename: " << rhs.m_ename
       << " m_salary: " << rhs.m_salary
       << " m_employee_project: " << rhs.m_employee_project.get();
    return os;
}


