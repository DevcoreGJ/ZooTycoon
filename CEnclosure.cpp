// CEnclosure.cpp
#include "CEnclosure.h"
#include <iostream>

void CEnclosure::AddAnimal(std::shared_ptr<CAnimal> animal) {
    m_animals.push_back(animal);
}

void CEnclosure::Print() const {
    for (const auto& animal : m_animals) {
        std::cout << "Name: " << animal->GetSpeciesName() << ", Age: " << animal->GetAge() << std::endl;
    }
}
