#ifndef ENGINE_HPP
#define ENGINE_HPP
#include <iostream>

class Engine
{
private:
    /* data */
    int m_horsepower;
    float m_torque;
    
public:
    Engine() = delete;
    Engine(const Engine&) = delete;
    Engine(Engine&&) = delete;
    Engine& operator=(const Engine&) = delete;
    Engine&& operator=(Engine&&) = delete;

    ~Engine() {}

    Engine(int horsepower, int torque);

    int horsepower() const { return m_horsepower; }
    void setHorsepower(int horsepower) { m_horsepower = horsepower; }

    float torque() const { return m_torque; }

    friend std::ostream &operator<<(std::ostream &os, const Engine &rhs);
};

#endif // ENGINE_HPP
