#include "CAnimal.h"

CAnimal::CAnimal(int age, std::string name) : age(age), name(name) {}

CAnimal::~CAnimal() {}

std::string CAnimal::GetSpeciesName() const {
    return "Unknown";
}

int CAnimal::GetAge() const {
    return age;
}

std::string CAnimal::GetName() const {
    return name;
}
