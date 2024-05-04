#pragma once
#include <cstdio>
#include <string>
#include <vector>
#include "cargo.hpp"

class Ship
{
public:
    int getId() const { return id_; }
    size_t getCapacity() const { return capacity_; }
    size_t getCrew() const { return crew_; }
    size_t getMaxCrew() const { return max_crew_; }
    size_t getSpeed() const { return speed_; }
    std::string getName() const { return name_; }
    void setName(const std::string &name) { name_ = name; }
    Ship() : id_{-1}, capacity_{}, max_crew_{}, speed_{} {}
    Ship(int id, size_t speed, size_t max_crew) : Ship(id, 0, max_crew, speed, {}) {}
    Ship(int id, size_t capacity, size_t max_crew, size_t speed, const std::string &name)
        : id_{id}, capacity_{capacity}, max_crew_{max_crew}, speed_{speed}, name_{name} {}

    Ship &operator+=(const int new_crewmen)
    {
        crew_ += new_crewmen;
        return *this;
    }
    Ship &operator-=(const int crewmen)
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

private:
    int id_;
    size_t capacity_;
    size_t crew_;
    size_t max_crew_;
    size_t speed_;
    std::string name_;
    std::vector<Cargo> cargo_;
};
