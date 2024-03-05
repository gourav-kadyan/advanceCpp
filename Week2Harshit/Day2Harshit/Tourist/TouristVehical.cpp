#include "TouristVehical.hpp"

TouristVehical::TouristVehical(unsigned long number, TouristVehicleType type, unsigned int seat_count, float per_hour_booking_charges, unsigned long serial_number, PermitType permit_type, unsigned int duration_left)
:m_number{number}, m_type{type}, m_seat_count{seat_count}, m_per_hour_booking_charges{per_hour_booking_charges},m_permit(std::make_shared<Permit>(serial_number, permit_type, duration_left))
{}


std::ostream &operator<<(std::ostream &os, const TouristVehical &rhs) {

    std::string val {""};
    if(rhs.m_type == TouristVehicleType::Bike){
        val = "Bike";
    }
    else if(rhs.m_type == TouristVehicleType::Bus){
        val = "Bus";
    }
    else{
        val = "Cab";
    }

    os << "m_number: " << rhs.m_number
       << " m_type: " << val
       << " m_seat_count: " << rhs.m_seat_count
       << " m_per_hour_booking_charges: " << rhs.m_per_hour_booking_charges
       << " m_permit: " << *rhs.m_permit;
    return os;
}

/* 

int x = 10;
int *ptr = &x;

ptr --> show x ka address
*ptr --> show x ki value
&ptr --> show ptr ka address

*/
