#include "cargo.hpp"

Cargo &Cargo::operator+=(const size_t amount)
{
    amount_ += amount;
    return *this;
}

Cargo &Cargo::operator-=(const size_t amount)
{
    if (amount_ > amount)
    {
        amount_ -= amount;
    }
    else
    {
        amount_ = 0;
    }
    return *this;
}