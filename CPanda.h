// CPanda.h
#pragma once

#include "CAnimal.h"

class CPanda : public CAnimal {
public:
    CPanda(int age, std::string name);
    std::string GetSpeciesName() const override;
};