#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>
#include <string>
#include "Engine.hpp"
#include "CarType.hpp"
class Car
{
private:
    /* data */
    std::string m_id;
    float m_price;
    std::string m_model;
    Engine* m_engine;
    CarType m_ctype;
public:
    Car() = delete;
    Car(const Car&) = delete;
    Car(Car&&) = delete;
    Car& operator=(const Car&) = delete;
    Car&& operator=(Car&&) = delete;
    ~Car() {}

    Car(std::string id, float price, std::string model, Engine* engine, CarType ctype);
    
    Car(std::string id, std::string model, Engine* engine, CarType ctype);

    std::string id() const { return m_id; }

    float price() const { return m_price; }
    void setPrice(float price) { m_price = price; }

    std::string model() const { return m_model; }

    Engine* engine() const { return m_engine; }
    void setEngine(Engine* engine) { m_engine = engine; }

    //CarType ctype() const { return m_ctype; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);
};

#endif // CAR_HPP
