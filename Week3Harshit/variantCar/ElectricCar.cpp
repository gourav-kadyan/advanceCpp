#include "ElectricCar.hpp"

ElectricCar::ElectricCar(std::string name, float max_power, float battery_limit, float battery_charging_time, float range)
:m_name{name}, m_max_power{max_power}, m_battery_charging_time{battery_charging_time}, m_battery_limit{battery_limit}, m_range{range}
{}
std::ostream &operator<<(std::ostream &os, const ElectricCar &rhs) {
    os << "m_name: " << rhs.m_name
       << " m_max_power: " << rhs.m_max_power
       << " m_battery_limit: " << rhs.m_battery_limit
       << " m_battery_charging_time: " << rhs.m_battery_charging_time
       << " m_range: " << rhs.m_range;
    return os;
}
