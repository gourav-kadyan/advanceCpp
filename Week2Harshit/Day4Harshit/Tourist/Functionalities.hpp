#ifndef FUNCTIONALITIES_HPP
#define FUNCTIONALITIES_HPP
#include "TouristVehical.hpp"
#include <list>
#include "EmptyContainer.hpp"
#include "WrongType.hpp"
#include "NegativeValue.hpp"
#include "Oversized.hpp"

using VehicalPtr = std::shared_ptr<TouristVehical>;
using Container = std::list<VehicalPtr>;
using Container
void CreateObjects(Container& obj);

Container PermitTypeCondition(const Container& obj, int n);

float AvgPerType(const Container& obj, int n);

unsigned long MaxPerBookingCharge(const Container& obj);

Container FirstNInstances(const Container& obj, int n);



#endif // FUNCTIONALITIES_HPP
