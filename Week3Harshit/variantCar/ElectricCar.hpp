#ifndef ELECTRICCAR_HPP
#define ELECTRICCAR_HPP

#include<iostream>


class ElectricCar
{
private:
    /* data */
    std::string m_name;
    float m_max_power;
    float m_battery_limit;//in Wh
    float m_battery_charging_time;
    float m_range;
public:
    ElectricCar(/* args */) = delete;
    ElectricCar(const ElectricCar&) = delete;
    ElectricCar(ElectricCar&&) = delete;
    ElectricCar& operator=(const ElectricCar&) = delete;
    ElectricCar& operator=(ElectricCar&&) = delete;

    ElectricCar(std::string name, float max_power, float battery_limit, float battery_charging_time, float range);

    ~ElectricCar() {}

    std::string name() const { return m_name; }
    void setName(const std::string &name) { m_name = name; }

    float maxPower() const { return m_max_power; }

    float batteryLimit() const { return m_battery_limit; }
    void setBatteryLimit(float battery_limit) { m_battery_limit = battery_limit; }

    float batterChargingTime() const { return m_battery_charging_time; }
    void setBatterChargingTime(float batter_charging_time) { m_battery_charging_time = batter_charging_time; }

    float range() const { return m_range; }

    friend std::ostream &operator<<(std::ostream &os, const ElectricCar &rhs);
};

#endif // ELECTRICCAR_HPP
