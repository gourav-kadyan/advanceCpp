#include "Permit.hpp"

Permit::Permit(unsigned long serial_number, PermitType permit_type, unsigned int duration_left)
:m_serial_number(serial_number), m_permit_type(permit_type), m_duration_left(duration_left)
{}

std::ostream &operator<<(std::ostream &os, const Permit &rhs) {
    std::string val {""};
    if(rhs.m_permit_type == PermitType::Lease){
        val = "Lease";
    }
    else{
        val = "Owned";
    }
    os << "m_serial_number: " << rhs.m_serial_number
       << " m_permit_type: " << val
       << " m_duration_left: " << rhs.m_duration_left;
    return os;
}
