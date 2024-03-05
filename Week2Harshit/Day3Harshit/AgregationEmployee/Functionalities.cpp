#include "Functionalities.hpp"

void CreateObjects(Container &obj, ProjectContainer &pro)
{
    pro.push_back(std::make_shared<Project>("pr001", 29836.3, ProjectType::Backend));
    pro.push_back(std::make_shared<Project>("pr002", 29894.3, ProjectType::Backend));
    pro.push_back(std::make_shared<Project>("pr003", 29834.3234, ProjectType::Frontend));
    pro.push_back(std::make_shared<Project>("pr004", 29835.3234, ProjectType::Frontend));

    obj.push_back(std::make_shared<Employee>("emp001", 22938.89, EmployeeType::Fulltime, *pro[0]));
    obj.push_back(std::make_shared<Employee>("emp002", 229380.89, EmployeeType::Parttime, *pro[1]));
    obj.push_back(std::make_shared<Employee>("emp003", 229398.89, EmployeeType::Intern, *pro[2]));
    obj.push_back(std::make_shared<Employee>("emp004", 229238.89, EmployeeType::Fulltime, *pro[3]));
}

double MaxBudget(const Container& obj){

    double bal = 0;
    for(EmployeePtr it : obj){
        if(it->project().get().budget() > bal){
            bal = it->project().get().budget();
        }
    }

    return bal;
}
