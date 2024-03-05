#include "VendorAccount.hpp"

std::ostream &operator<<(std::ostream &os, const VendorAccount &rhs) {
    os << static_cast<const Account &>(rhs)
       << " m_vendor_name: " << rhs.m_vendor_name;
    return os;
}

VendorAccount::VendorAccount(std::string name, std::string vendor_name)
:Account(name), m_vendor_name{vendor_name} {}

VendorAccount::VendorAccount(std::string name, std::string vendor_name,const DriverContainer& drivers, const CabUnitContainer& cabunits)
:Account(name), m_vendor_name{vendor_name}
// , m_drivers{drivers}, m_cabunits{cabunits}
{
    m_drivers = drivers;
    m_cabunits = cabunits;
}

void VendorAccount::RegisterAccount()
{
    std::cout << "Account verified via GOVT norms\n";
}