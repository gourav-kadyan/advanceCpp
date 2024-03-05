#ifndef PROJECT_HPP
#define PROJECT_HPP
#include<iostream>

class Project
{
private:
    /* data */
    std::string m_project_id;
    double m_project_budget;
    unsigned int m_team_size;
public:
    
    Project(/* args */) = delete;
    Project(const Project&) = delete;
    Project(Project&&) = delete;
    Project& operator=(const Project&) = delete;
    Project& operator=(Project&&) = delete;

    Project(std::string project_id, double project_budget, unsigned int team_size);

    ~Project() {}

    unsigned int teamSize() const { return m_team_size; }

    void setTeamSize(unsigned int team_size) { m_team_size = team_size; }

    double projectBudget() const { return m_project_budget; }
    void setProjectBudget(double project_budget) { m_project_budget = project_budget; }

    std::string projectId() const { return m_project_id; }

    friend std::ostream &operator<<(std::ostream &os, const Project &rhs);
};

#endif // PROJECT_HPP
