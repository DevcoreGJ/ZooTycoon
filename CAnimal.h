// CAnimal.h
#pragma once

#include <string>

class CAnimal {
public:
    CAnimal(int age, const std::string& name);
    virtual ~CAnimal();
    virtual std::string GetSpeciesName() const;
    int GetAge() const; // Add this function to get the age of the animal.

private:
    int m_age;
    std::string m_name;
};
