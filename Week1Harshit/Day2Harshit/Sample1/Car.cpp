#include "Car.hpp"

/*

constructor chaining use multiple constructor of the same class together to make the object

we cannot use delegated constructor and member list initialization
*/



Car::Car(std::string id, std::string model, Engine *engine, CarType ctype)
    : m_id{id}, m_model{model}, m_engine{engine}, m_ctype{ctype}
{}

Car::Car(std::string id, float price, std::string model, Engine *engine, CarType ctype)
:Car(id,model,engine, ctype)
{
    m_price = price;
}

std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << "m_id: " << rhs.m_id
       << " m_price: " << rhs.m_price
       << " m_model: " << rhs.m_model
       << " m_engine: " << *rhs.m_engine;
       //<< " CarType: " << rhs.m_ctype;
    return os;
}




