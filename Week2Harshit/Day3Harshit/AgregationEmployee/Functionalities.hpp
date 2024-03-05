#ifndef FUNCTIONALITIES_HPP
#define FUNCTIONALITIES_HPP

#include "Employee.hpp"
#include <memory>
#include <vector>

using EmployeePtr = std::shared_ptr<Employee>;
using Container = std::vector<EmployeePtr>;
using ProjectPtr = std::shared_ptr<Project>;
using ProjectContainer = std::vector<ProjectPtr>;

void CreateObjects(Container& obj, ProjectContainer& pro);

double MaxBudget(const Container& obj);

#endif // FUNCTIONALITIES_HPP
