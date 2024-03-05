#ifndef DIESELCAR_HPP
#define DIESELCAR_HPP

#include<iostream>

class DieselCar
{
private:
    /* data */
    std::string m_name;
    float m_max_power;
    float m_range;
    float m_tank_size;
public:
    DieselCar(/* args */) = delete;
    DieselCar(const DieselCar&) = delete;
    DieselCar(DieselCar&&) = delete;
    DieselCar& operator=(const DieselCar&) = delete;
    DieselCar& operator=(DieselCar&&) = delete;

    DieselCar(std::string name, float max_power, float range, float tank_size);


    ~DieselCar() {}

    std::string name() const { return m_name; }
    void setName(const std::string &name) { m_name = name; }

    float maxPower() const { return m_max_power; }
    void setMaxPower(float max_power) { m_max_power = max_power; }

    float range() const { return m_range; }
    void setRange(float range) { m_range = range; }

    float tankSize() const { return m_tank_size; }
    void setTankSize(float tank_size) { m_tank_size = tank_size; }

    friend std::ostream &operator<<(std::ostream &os, const DieselCar &rhs);
};

#endif // DIESELCAR_HPP
