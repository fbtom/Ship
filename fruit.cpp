#include "fruit.hpp"

size_t Fruit::getPrice() const
{
    size_t price = base_price_;
    
    if (rot_ <= 0)
    {
        price = price * 0.5;
    }
    else if (rot_ <= 2)
    {
        price = price * 0.8;
    }

    return price;
}

Fruit &Fruit::operator--()
{
    rot_--;
    return *this;
}
