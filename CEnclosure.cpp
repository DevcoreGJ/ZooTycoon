#include "CEnclosure.h"
#include <iostream>

CEnclosure::CEnclosure() {}

void CEnclosure::AddAnimal(std::shared_ptr<CAnimal> animal) {
    inhabitants.push_back(animal);
}

void CEnclosure::Print() const {
    std::cout << "Animals in the enclosure:" << std::endl;
    for (size_t i = 0; i < inhabitants.size(); i++) {
        std::shared_ptr<CAnimal> animal = inhabitants[i];
        std::string name = animal->GetName();
        std::string species = animal->GetSpeciesName();
        std::cout << "Animal " << (i + 1) << ":" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Species: " << species << std::endl;
    }
}
