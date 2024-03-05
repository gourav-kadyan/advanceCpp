#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP
#include "Project.hpp"
#include <functional>
#include <ostream>

class Employee
{
private:
    /* data */
    std::string m_employee_id;
    std::string m_ename;
    double m_salary;
    std::reference_wrapper<Project> m_employee_project;
    
public:
    Employee(/* args */) = delete;
    Employee(const Employee&) = delete;
    Employee(Employee&&) = delete;
    Employee& operator=(const Employee&) = delete;
    Employee& operator=(Employee&&) = delete;

    ~Employee() {}

    double salary() const { return m_salary; }

    std::string ename() const { return m_ename; }
    void setEname(const std::string &ename) { m_ename = ename; }

    std::string employeeId() const { return m_employee_id; }

    Employee(std::string employee_id, std::string ename, double salary, std::reference_wrapper<Project> pr);

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
};

#endif // EMPLOYEE_HPP
