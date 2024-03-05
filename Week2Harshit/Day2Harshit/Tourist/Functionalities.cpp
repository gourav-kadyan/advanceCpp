#include "Functionalities.hpp"

void CreateObjects(Container &obj)
{
    obj.push_back(std::make_shared<TouristVehical>(12344,TouristVehicleType::Bike,2,33.3f,498723,PermitType::Lease,2));
    obj.push_back(std::make_shared<TouristVehical>(122344,TouristVehicleType::Cab,4,88.3f,499723,PermitType::Owned,6));
    obj.push_back(std::make_shared<TouristVehical>(1223774,TouristVehicleType::Bus,22,12.3f,498723,PermitType::Lease,9));
}

Container PermitTypeCondition(const Container &obj, int n)
{

    if(obj.size() == 0){
        throw EmptyContainer("The Given Object is Empty");
    }

    if(n <= 0){
        throw NegativeValue("The Given Number N is Negative or Zero");
    }

    if(n > obj.size()){
        throw Oversized("The Number N is greater than the Given Container");
    }

    Container res;
    int count = 0;
    for(VehicalPtr it : obj){
        if(it->permit()->permitType() == PermitType::Lease && it->seatCount() >= 4){
            res.push_back(it);
            count++;
        }
        if(count == n){
            break;
        }
    }
    if(count != n){
        throw Oversized("The Given Number N is Higher than the Instances");
    }
    return res;
}

float AvgPerType(const Container &obj, int n)
{
    if(obj.size() == 0){
        throw EmptyContainer("The Given Object is Empty");
    }

    float sum = 0;
    int count = 0;
    TouristVehicleType tt;
    if(n == 1){
        tt = TouristVehicleType::Bike;
    }
    else if(n == 2){
        tt = TouristVehicleType::Bus;
    }
    else if(n == 3){
        tt = TouristVehicleType::Cab;
    }
    else {
        throw WrongType("The Given N is not Valid as per the Required Input");
    }

    for(VehicalPtr it : obj){
        if(it->type() == tt){
            sum += it->perHourBookingCharges();
            count++;
        }
    }

    return sum/count;
}

unsigned long MaxPerBookingCharge(const Container &obj)
{
    if(obj.size() == 0){
        throw EmptyContainer("The Given Object is Empty");
    }

    unsigned long serial = -1;
    float charge = -1;

    for(VehicalPtr it : obj){
        if(it->perHourBookingCharges() > charge){
            charge = it->perHourBookingCharges();
            serial = it->permit()->serialNumber();
        }
    }

    return serial;
}

Container FirstNInstances(const Container &obj, int n)
{
    if(obj.size() == 0){
        throw EmptyContainer("The Given Object is Empty");
    }

    if(n <= 0){
        throw NegativeValue("The Given Number N is Negative or Zero");
    }

    if(n > obj.size()){
        throw Oversized("The Number N is greater than the Given Container");
    }

    Container res;
    int count = 0;

    for(VehicalPtr it : obj){
        count++;
        res.push_back(it);
        if(count == n){
            break;
        }
    }

    return res;
}
