#ifndef FUNCTIONALITIES_HPP
#define FUNCTIONALITIES_HPP

#include<array> //stl
#include <memory>
#include "Car.hpp"
#include "EmptyContainerException.hpp"
#include "IdNotFoundException.hpp"
//always make sure const where you see read only things so the human error will be less
using CarPtr = std::shared_ptr<Car>;
//using EnginePtr = std::shared_ptr<Engine>;
using Container = std::array<CarPtr, 3>;


void CreateObjects(Container& data);


//void DeleteObjects( Container& data); // no need after making smart pointer


//computing total horse power
int TotalHorsePower(const Container& data);


//check whether the car price above 7 lakhs
bool IsAllCarAbove700000(const Container& data);


//return the engine pointer of the car whose price is lowest
//if multiple car instance have the same min, consider first min found
Engine* EnginePointerToMinPriceCar(const Container& data);


//finding the average torque
float AverageEngineTorque(const Container& data);


//function to print the model name of the car whose id is passed as parameter
std::string FindCarModelByID(const Container&data, const std::string &id);


//find t


#endif // FUNCTIONALITIES_HPP
