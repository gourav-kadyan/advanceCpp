#include "DieselCar.hpp"

DieselCar::DieselCar(std::string name, float max_power, float range, float tank_size)
:m_name{name}, m_max_power{max_power}, m_range{range}, m_tank_size{tank_size}
{}

std::ostream &operator<<(std::ostream &os, const DieselCar &rhs) {
    os << "m_name: " << rhs.m_name
       << " m_max_power: " << rhs.m_max_power
       << " m_range: " << rhs.m_range
       << " m_tank_size: " << rhs.m_tank_size;
    return os;
}
