// CPanda.h
#pragma once

#include "CAnimal.h"

class CPanda : public CAnimal {
public:
    CPanda(int age, const std::string& name);
    std::string GetSpeciesName() const override;
};
