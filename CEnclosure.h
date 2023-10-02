#pragma once

#include <vector>
#include <memory>
#include "CAnimal.h" // Include the header for CAnimal

class CEnclosure {
public:
    CEnclosure();
    void AddAnimal(std::shared_ptr<CAnimal> animal);
    void Print() const;
private:
    std::vector<std::shared_ptr<CAnimal>> inhabitants;
};
