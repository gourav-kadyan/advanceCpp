#include "Functionalities.hpp"

void CreateObjects(Employee **employees, Project **projects)
{
    projects[0] = new Project("prj101", 122355.00f, 55);
    employees[0] = new Employee("emp101", "Gourav", 56000.0f,*projects[0] );

    projects[1] = new Project("prj102", 1223455.00f, 155);
    employees[1] = new Employee("emp102", "Asim", 56000.0f,*projects[1] );

    employees[2] = new Employee("emp103", "Ayush Singh Parihar", 56000.0f,*projects[0] );

}

void CreateObjects(std::vector<Employee*> &employees, std::vector<Project*> &projects)
{
    projects.push_back(new Project("prj101", 122355.00f, 55));
    employees.push_back(new Employee("emp101", "Gourav", 56000.0f, *projects.back()));

    projects.push_back(new Project("prj102", 1223455.00f, 155));
    employees.push_back(new Employee("emp102", "Asim", 56000.0f,*projects.back()));
    employees.push_back(new Employee("emp103", "Ayush Singh Parihar", 56000.0f,*projects.back()));
}
