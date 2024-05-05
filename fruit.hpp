#pragma once
#include "cargo.hpp"

class Fruit : public Cargo
{
public:
    size_t getPrice() const override;
    Fruit &operator--();
protected:
    int rot_;
};