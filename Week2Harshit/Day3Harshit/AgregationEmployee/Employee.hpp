#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP
#include "Project.hpp"
#include <functional>
#include <ostream>
#include "EmployeeType.hpp"
#include<vector>
using ProjectRef = std::reference_wrapper<Project>; 

class Employee
{
private:
    std::string m_emp_id;
    double m_salary;
    EmployeeType m_emp_type;
    ProjectRef m_project;
    

public:
    Employee() = delete;
    Employee(const Employee&) = delete;
    Employee(Employee&&) = delete;
    Employee& operator=(const Employee&) = delete;
    Employee& operator=(Employee&&) = delete;

    Employee(std::string emp_id, double salary, EmployeeType emp_type, ProjectRef project);

    ~Employee() {}

    std::reference_wrapper<Project> project() const { return m_project; }

    EmployeeType empType() const { return m_emp_type; }

    double salary() const { return m_salary; }
    void setSalary(double salary) { m_salary = salary; }

    std::string empId() const { return m_emp_id; }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
};

#endif // EMPLOYEE_HPP
