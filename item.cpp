#include "item.hpp"

size_t Item::getPrice() const
{
    auto price{base_price_};
    if (rarity_ == Rarity::Legendary)
    {
        price = price * 2;
    }
    else if (rarity_ == Rarity::Epic)
    {
        price = price * 1.6;
    }
    else if (rarity_ == Rarity::Rare)
    {
        price = price * 1.2;
    }

    return price;
}
