// CPenguin.h
#pragma once

#include "CAnimal.h"

class CPenguin : public CAnimal {
public:
    CPenguin(int age, std::string name);
    std::string GetSpeciesName() const override;
};