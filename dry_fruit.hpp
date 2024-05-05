#pragma once

#include "fruit.hpp"

class DryFruit : public Fruit
{
public:
    size_t getPrice() const override;
    std::string getName() const override;

    DryFruit &operator--();

};
