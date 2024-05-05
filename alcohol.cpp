#include "alcohol.hpp"

size_t Alcohol::getPrice() const
{
    const auto alcohol_factor = (voltage_/spirit_voltage_)*spirit_price_;
    return base_price_* alcohol_factor;
}
