#include "dry_fruit.hpp"

size_t DryFruit::getPrice() const
{
    return base_price_ * 3;
}

std::string DryFruit::getName() const
{
    return name_;
}

DryFruit &DryFruit::operator--()
{
    rot_=rot_-10;
    return *this;
}
