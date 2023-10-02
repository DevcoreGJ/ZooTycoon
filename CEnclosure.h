// CEnclosure.h
#pragma once

#include <vector>
#include <memory>
#include "CAnimal.h"

class CEnclosure {
public:
    void AddAnimal(std::shared_ptr<CAnimal> animal);
    void Print() const;

private:
    std::vector<std::shared_ptr<CAnimal>> m_animals;
};
