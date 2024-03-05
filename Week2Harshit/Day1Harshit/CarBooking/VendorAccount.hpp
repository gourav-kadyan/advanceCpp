
#ifndef VENDORACCOUNT_HPP
#define VENDORACCOUNT_HPP

#include "Account.hpp"
#include <ostream>
#include <vector>
#include "Driver.hpp"
#include "CabUnit.hpp"

using CabUnitContainer = std::vector<CabUnit*>;
using DriverContainer = std::vector<Driver*>;
class VendorAccount : public Account
{
private:
    std::string m_vendor_name {""};
    DriverContainer m_drivers {};
    CabUnitContainer m_cabunits {};
public:
    VendorAccount(/* args */) = delete;
    VendorAccount(const VendorAccount&) = delete;
    VendorAccount(VendorAccount&&) = delete;
    VendorAccount& operator=(const VendorAccount&) = delete;
    VendorAccount& operator=(VendorAccount&&) = delete;

    VendorAccount(std::string name, std::string vendor_name);
    VendorAccount(std::string name, std::string vendor_name, const DriverContainer& drivers, const CabUnitContainer& cabunits);


    void RegisterAccount() override;

    ~VendorAccount() {}

    friend std::ostream &operator<<(std::ostream &os, const VendorAccount &rhs);
};



#endif // VENDORACCOUNT_HPP
