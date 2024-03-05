#include "Project.hpp"
std::ostream &operator<<(std::ostream &os, const Project &rhs) {
    os << "m_project_id: " << rhs.m_project_id
       << " m_project_budget: " << rhs.m_project_budget
       << " m_team_size: " << rhs.m_team_size;
    return os;
}

Project::Project(std::string project_id, double project_budget, unsigned int team_size)
:m_project_id{project_id}, m_project_budget{project_budget}, m_team_size{team_size}
{}