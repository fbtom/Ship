#include "ship.hpp"

int Ship::getId() const { return id_; }

size_t Ship::getCapacity() const { return capacity_; }

size_t Ship::getCrew() const { return crew_; }

size_t Ship::getMaxCrew() const { return max_crew_; }

size_t Ship::getSpeed() const { return speed_; }

std::string Ship::getName() const { return name_; }

void Ship::setName(const std::string &name) { name_ = name; }

void Ship::load(std::shared_ptr<Cargo> cargo)
{
    cargo_.emplace_back(cargo);
}

Ship::Ship() : id_{-1}, capacity_{}, max_crew_{}, speed_{} {}

Ship::Ship(int id, size_t speed, size_t max_crew) : Ship(id, 0, max_crew, speed, {}) {}

Ship::Ship(int id, size_t capacity, size_t max_crew, size_t speed, const std::string &name)
    : id_{id}, capacity_{capacity}, max_crew_{max_crew}, speed_{speed}, name_{name} {}

Ship &Ship::operator+=(const int new_crewmen)
{
    crew_ += new_crewmen;
    return *this;
}
Ship &Ship::operator-=(const int crewmen)
{
    if (crew_ > crewmen)
    {
        crew_ -= crewmen;
    }
    else
    {
        crew_ = 0;
    }
    return *this;
}
