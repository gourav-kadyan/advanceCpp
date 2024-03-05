#ifndef ID_HPP
#define ID_HPP

#include <iostream>
#include "Month.hpp"
#include "Track.hpp"
#include "Level.hpp"
#include "Country.hpp"
#include "BatchNumber.hpp"
#include "Year.hpp"
#include "Location.hpp"

class ID
{
private:
    Country m_country;
    Track m_track;
    Month m_month;
    Year m_year;
    Level m_track_level;
    BatchNumber m_batch_number;
    Location m_location; //optional
public:
    ID() = delete;
    ~ID() {}

    ID(Country country, Track track, Month month, Year year, Level track_level, BatchNumber batch_number, Location location);
    ID(Country country, Track track, Month month, Year year, Level track_level, BatchNumber batch_number);

    std::string CreateId();
};

#endif // ID_HPP
