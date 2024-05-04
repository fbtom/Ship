#pragma once
#include <cstdio>
#include <string>

class Cargo
{

    Cargo &operator+=(const size_t amount)
    {
        amount_ += amount;
        return *this;
    }

    Cargo &operator-=(const size_t amount)
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

private:
    size_t amount_;
    double base_price_;
    std::string name_;
};
