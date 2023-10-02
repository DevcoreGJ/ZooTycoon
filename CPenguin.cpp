// CPenguin.cpp
#include "CPenguin.h"

CPenguin::CPenguin(int age, std::string name) : CAnimal(age, name) {}

std::string CPenguin::GetSpeciesName() const {
    return "Penguin";
}