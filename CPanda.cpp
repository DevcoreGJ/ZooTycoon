// CPanda.cpp
#include "CPanda.h"

CPanda::CPanda(int age, std::string name) : CAnimal(age, name) {}

std::string CPanda::GetSpeciesName() const {
    return "Panda";
}   