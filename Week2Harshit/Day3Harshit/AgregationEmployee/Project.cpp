#include "Project.hpp"

Project::Project(std::string project_id, double budget, ProjectType type)
:m_project_id{project_id}, m_budget{budget}, m_type{type}
{}

std::ostream &operator<<(std::ostream &os, const Project &rhs) {

    std::string val {""};

    if(rhs.m_type == ProjectType::Backend){
        val = "Backend";
    }
    else{
        val = "Frontend";
    }

    os << "m_project_id: " << rhs.m_project_id
       << " m_budget: " << rhs.m_budget
       << " m_type: " << val;
    return os;
}
