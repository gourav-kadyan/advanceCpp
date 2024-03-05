#ifndef PERMIT_HPP
#define PERMIT_HPP

#include <iostream>
#include "PermitType.hpp"

class Permit
{
private:
    /* data */
    unsigned long m_serial_number;
    PermitType m_permit_type;
    unsigned int m_duration_left;
public:
    Permit() = delete;
    Permit(const Permit&) = delete;
    Permit(Permit&&) = delete;
    Permit& operator=(const Permit&) = delete;
    Permit& operator=(Permit&&) = delete;

    Permit(unsigned long serial_number, PermitType permit_type, unsigned int duration_left);

    ~Permit() {}

    unsigned long serialNumber() const { return m_serial_number; }

    PermitType permitType() const { return m_permit_type; }

    unsigned int durationLeft() const { return m_duration_left; }
    void setDurationLeft(unsigned int duration_left) { m_duration_left = duration_left; }

    friend std::ostream &operator<<(std::ostream &os, const Permit &rhs);
};

#endif // PERMIT_HPP
