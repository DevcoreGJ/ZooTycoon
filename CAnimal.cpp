// CAnimal.cpp
#include "CAnimal.h"
#include <string> // Add this line to include the <string> header

CAnimal::CAnimal(int age, const std::string& name)
    : m_age(age), m_name(name) {}

CAnimal::~CAnimal() {}

std::string CAnimal::GetSpeciesName() const {
    return "Unknown Species";
}

int CAnimal::GetAge() const {
    return m_age;
}
