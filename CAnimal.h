#pragma once

#include <string>

class CAnimal {
public:
    CAnimal(int age, std::string name);
    virtual ~CAnimal();
    virtual std::string GetSpeciesName() const;
    int GetAge() const;
    std::string GetName() const;

private:
    int age;
    std::string name;
};
