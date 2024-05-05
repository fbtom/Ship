#pragma once

#include <cstdio>
#include <string>
#include <vector>
#include "cargo.hpp"
#include <memory>
#include <algorithm>

class Ship
{
public:
    int getId() const;
    size_t getCapacity() const;
    size_t getCrew() const;
    size_t getMaxCrew() const;
    size_t getSpeed() const;
    std::string getName() const;
    void setName(const std::string &name);
    void load(std::shared_ptr<Cargo> cargo);
    void unload(Cargo *cargo);

    Ship();
    Ship(int id, size_t speed, size_t max_crew);
    Ship(int id, size_t capacity, size_t max_crew, size_t speed, const std::string &name);

    Ship &operator+=(const int new_crewmen);
    Ship &operator-=(const int crewmen);

private:
    int id_;
    size_t capacity_;
    size_t crew_;
    size_t max_crew_;
    size_t speed_;
    std::string name_;
    std::vector<std::shared_ptr<Cargo>> cargo_;
};
