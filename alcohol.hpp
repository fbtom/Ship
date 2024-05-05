#include "cargo.hpp"

class Alcohol : public Cargo
{
public:
    size_t getPrice() const override;
private:
    size_t voltage_{};
    size_t spirit_price_{50};
    size_t spirit_voltage_{96};
};