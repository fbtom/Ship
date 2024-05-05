#include "cargo.hpp"

enum class Rarity
{
    Common = 0,
    Rare = 1,
    Epic = 2,
    Legendary = 3
};

class Item : public Cargo
{
public:
    size_t getPrice() const override;

private:
    Rarity rarity_;
};