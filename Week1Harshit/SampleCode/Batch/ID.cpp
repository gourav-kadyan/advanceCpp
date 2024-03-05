#include "ID.hpp"

ID::ID(Country country, Track track, Month month, Year year, Level track_level, BatchNumber batch_number)
:m_country(country), m_track(track), m_month(month), m_year(year), m_track_level(track_level), m_batch_number(batch_number)
{}

ID::ID(Country country, Track track, Month month, Year year, Level track_level, BatchNumber batch_number, Location location)
:ID(country,track, month, year, track_level, batch_number), m_location(location)
{}

std::string ID::CreateId(){ //CountryYearMonthTrackLevel_Location_Track_Batch_(Batch)
    std::string new_id = "";

    return new_id;
}
