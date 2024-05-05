#pragma once
#include <cstdio>
#include <string>

class Cargo
{

    Cargo &operator+=(const size_t amount);
    Cargo &operator-=(const size_t amount);

private:
    size_t amount_;
    double base_price_;
    std::string name_;
};
