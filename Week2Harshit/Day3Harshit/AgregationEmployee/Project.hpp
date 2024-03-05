#ifndef PROJECT_HPP
#define PROJECT_HPP
#include <iostream>
#include "ProjectType.hpp"

class Project
{
private:
    /* data */
    std::string m_project_id;
    double m_budget;
    ProjectType m_type;
    
public:
    Project() = delete;
    Project(const Project&) = delete;
    Project(Project&&) = delete;
    Project& operator=(const Project&) = delete;
    Project& operator=(Project&&) = delete;

    Project(std::string project_id, double budget, ProjectType type);

    ~Project() {}

    std::string projectId() const { return m_project_id; }

    double budget() const { return m_budget; }
    void setBudget(double budget) { m_budget = budget; }

    ProjectType type() const { return m_type; }

    friend std::ostream &operator<<(std::ostream &os, const Project &rhs);
};

#endif // PROJECT_HPP
