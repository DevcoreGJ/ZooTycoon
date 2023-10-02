#include "CEnclosure.h"
#include <iostream>

CEnclosure::CEnclosure() {}

void CEnclosure::AddAnimal(std::shared_ptr<CAnimal> animal) {
    inhabitants.push_back(animal);
}

void CEnclosure::Print() const {
    for (const auto& animal : inhabitants) {
        std::cout << "Species: " << animal->GetSpeciesName()
            << ", Name: " << animal->GetName()
            << ", Age: " << animal->GetAge() << std::endl;
    }
}
