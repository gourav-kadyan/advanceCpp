#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>
#include <string>
#include "Engine.hpp"
#include "CarType.hpp"
#include <memory>
using EnginePtr = std::shared_ptr<Engine>;
class Car
{
private:
    /* data */
    std::string m_id{""};
    float m_price{0.0f};
    std::string m_model{""};
    EnginePtr m_engine{nullptr};
    CarType m_ctype{CarType::HATCHBACK};
public:
    Car() = default;
    Car(const Car&) = delete;
    Car(Car&&) = delete;
    Car& operator=(const Car&) = delete;
    Car&& operator=(Car&&) = delete;
    ~Car() {}

    Car(std::string id, float price, std::string model, EnginePtr engine, CarType ctype);
    
    Car(std::string id, std::string model, EnginePtr engine, CarType ctype);

    std::string id() const { return m_id; }

    float price() const { return m_price; }
    void setPrice(float price) { m_price = price; }

    std::string model() const { return m_model; }

    EnginePtr engine() const { return m_engine; }
    void setEngine(EnginePtr engine) { m_engine = engine; }

    //CarType ctype() const { return m_ctype; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);
};

#endif // CAR_HPP
