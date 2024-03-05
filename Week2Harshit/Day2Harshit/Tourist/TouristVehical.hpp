#ifndef TOURISTVEHICAL_HPP
#define TOURISTVEHICAL_HPP
#include "Permit.hpp"
#include "TouristVehicleType.hpp"
#include <memory>
#include <ostream>

using PermitPtr = std::shared_ptr<Permit>;

class TouristVehical
{
private:
    unsigned long m_number;
    TouristVehicleType m_type;
    unsigned int m_seat_count;
    float m_per_hour_booking_charges;
    PermitPtr m_permit;

public:
    TouristVehical() = delete;
    TouristVehical(const TouristVehical&) = delete;
    TouristVehical(TouristVehical&&) = delete;
    TouristVehical& operator=(const TouristVehical&) = delete;
    TouristVehical& operator=(TouristVehical&&) = delete;

    TouristVehical(unsigned long number, TouristVehicleType type, unsigned int seat_count,
                    float per_hour_booking_charges, unsigned long serial_number, PermitType permit_type, unsigned int duration_left);

    

    ~TouristVehical() {}

    unsigned int seatCount() const { return m_seat_count; }
    void setSeatCount(unsigned int seat_count) { m_seat_count = seat_count; }

    float perHourBookingCharges() const { return m_per_hour_booking_charges; }
    void setPerHourBookingCharges(float per_hour_booking_charges) { m_per_hour_booking_charges = per_hour_booking_charges; }

    PermitPtr permit() const { return m_permit; }

    unsigned long number() const { return m_number; }

    TouristVehicleType type() const { return m_type; }

    friend std::ostream &operator<<(std::ostream &os, const TouristVehical &rhs);
};

#endif // TOURISTVEHICAL_HPP
